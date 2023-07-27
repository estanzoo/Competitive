// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Pair
{
public: int value;
public: int weight;
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, w, sum = 0,totWeight = 0, numsCounted = 0;
    vector <Pair> gold;
    cin >> n >> w;
    for (int i = 0; i < n; i++)
    {
        Pair curr = Pair();
        cin >> curr.weight >> curr.value;
        gold.push_back(curr);
    }
    sort(gold.begin(), gold.end(), [](const Pair& lhs, const Pair& rhs) {
        return lhs.value > rhs.value;
     });
    while (totWeight < w)
    {
        numsCounted = 0;
        for (int i = 0; i < n; i++)
        {
            if (totWeight + gold[i].weight <= w)
            {
                totWeight += gold[i].weight;
                sum += gold[i].value;
                gold[i].weight = w + 1;
            }
            else
                numsCounted++;
        }
        if (numsCounted == n)
            break;
    }
    cout << sum;
    return 0;
}

