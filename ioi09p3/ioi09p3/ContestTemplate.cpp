// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, t, p, curr;
    cin >> n >> t >> p;
    vector<vector<int>>input(n, vector<int>(t, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            cin >> curr;
            input[i][i] = curr;
        }

    }
    return 0;
}

