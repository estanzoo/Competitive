// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    int n, curr;
    unordered_set<int> diffs;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        if (diffs.find(curr) == diffs.end())
        {
            diffs.emplace(curr);
        }
    }
    cout << diffs.size() << "\n";
    return 0;
}

