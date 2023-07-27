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
    int r, c;
    ll curr;
    cin >> r >> c;
    vector <vector<ll>> nums(r+2, vector<ll> (c+2, 0));

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> curr;
            nums[i][j] = curr;
        }
        nums[i][c + 1] = LLONG_MAX;
    }
    for (int i = 0; i <= c + 1; i++) nums[r + 1][i] = LLONG_MAX;
    bool works = true;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (nums[i][j] == 0)
            {
                vector<ll> greaterThan;
                greaterThan.push_back(nums[i][j - 1]);
                greaterThan.push_back(nums[i - 1][j]);              
                ll atLeast = max(greaterThan[0], greaterThan[1]);
                nums[i][j] = atLeast + 1;
            }
        }
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (nums[i][j] > 100000000000000000 || nums[i][j] >= nums[i + 1][j] || nums[i][j] >= nums[i][j + 1])
            {
                works = false;
                break;
            }
        }
    }
    if (works)
    {
        for (int i = 1; i <= r; i++)
        {
            cout << nums[i][1];
            for (int j = 2; j <= c; j++)
            {
                cout << " " << nums[i][j];
            }
            cout << "\n";
        }
    }
    else
        cout << -1 << "\n";
    return 0;
}

