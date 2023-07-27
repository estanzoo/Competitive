// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Pair {
public: int score;
public: string name;
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q, currN;
    string curr;
    vector <string> names;
    vector <int> scores;
    vector <Pair> pairs;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        names.push_back(curr);
        scores.push_back(0);
    }
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> currN;
            scores[j] += currN;
        }
    }
    for (int i = 0; i < n; i++)
    {
        Pair current = Pair();
        current.name = names[i];
        current.score = scores[i];
        pairs.push_back(current);
    }
    sort(pairs.begin(), pairs.end(), [](const Pair& lhs, const Pair& rhs) {
        return lhs.score > rhs.score;
        });
    for (int i = 3; i < n + 3; i++)
    {
        cout << i << ". " << pairs[i - 3].name << "\n";
    }
    return 0;
}

