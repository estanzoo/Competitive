// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int curr, highest = 0;
    unordered_map<int, int> occur;
    cin >> curr;
    while (curr != -1)
    {
        if (occur.find(curr) != occur.end())
        {
            int old = occur.at(curr);
            occur.erase(curr);
            occur.emplace(curr, old + 1);
        }
        else
            occur.emplace(curr, 1);
        if (occur.at(curr) > highest)
            highest = occur.at(curr);
        cin >> curr;
    }
    vector <int> good;
    for (auto& a : occur)
    {
        if (a.second == highest)
            good.push_back(a.first);
    }
    sort(good.begin(), good.end());
    for (int a : good)
        cout << a << "\n";
    return 0;
}

