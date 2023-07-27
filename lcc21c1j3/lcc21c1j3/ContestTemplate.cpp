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
    int n, k, curr, max = INT_MIN;
    cin >> n >> k;
    unordered_map<int, int> amt;
    vector <int> paths;
    amt.emplace(-1, 0);
    for (int i = 0; i < k; i++)
    {
        cin >> curr;
        amt.emplace(i+1, curr);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        paths.push_back(curr);
    }
    for (int i = 0; i < n; i++)
    {
        int curr = amt.at(paths[i]);
        if (curr > max)
            max = curr;
        for (int j = i+2; j < n; j++)
        {
            int curr1 = amt.at(paths[j]);
            if (curr + curr1 > max && paths[i] != paths[j])
                max = curr + curr1;
        }
    }
    cout << max;
    return 0;
}

