// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <climits>
#include <unordered_map>
using namespace std;


int main()
{
    int n, m, q, colorCount = 0;
    cin >> n >> m >> q;
    vector <int> questions;
    //vector<vector<int>> balls;
    unordered_map <string, int> colorIndex;
    //vector <vector<int>> balls(n, vector<int>(n, 0));
    //vector<int> balls[100000];
    vector<vector<int>> balls(m, vector<int>());
    for (int i = 0; i < n; i++)
    {
        string currColor;
        int value;
        cin >> currColor >> value;
        if (colorIndex.find(currColor) == colorIndex.end())
        {
            colorIndex.emplace(currColor, colorCount);
            colorCount++;
        }
        balls[colorIndex.at(currColor)].push_back(value);
    }
    for (int i = 0; i < m; i++)
        sort(balls[i].begin(), balls[i].end(), greater<int>());
    
    for (int i = 0; i < q; i++)
    {
        int currLine;
        cin >> currLine;
        questions.push_back(currLine);
    }
    int maxQ = *max_element(questions.begin(), questions.end());
    if (maxQ > n)
        maxQ = n;
    long long *indexSum = new long long[maxQ];
    for (int i = 0; i < maxQ; i++)
        indexSum[i] = 0;
    for (int i = 0; i < m; i++)
    {
        if (balls[i].size() > 0)
            indexSum[0] += balls[i].at(0);
    }
    for (int i = 1; i < maxQ; i++)
    {
        indexSum[i] += indexSum[i - 1];
        for (int j = 0; j < m; j++)
        {
            if (balls[j].size() > i)
            indexSum[i] += balls[j].at(i);
        }
    }
    for (int i = 0; i < q; i++)
        cout << indexSum[questions[i] - 1] << "\n";
        

    return 0;
}
