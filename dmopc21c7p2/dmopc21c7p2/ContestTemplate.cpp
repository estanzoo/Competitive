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
    int n, q;
    cin >> n >> q;
    vector <int> nums;
    for (int i = 1; i <= n; i++)
    {
        nums.push_back(i);
    }
    for (int i = 0; i < q; i++)
    {
        int l, r, a;
        cin >> l >> r >> a;
        vector <int> removed;
        for (int i = find(nums.begin(), nums.end(), l) - nums.begin(); i < find(nums.begin(), nums.end(), r) - nums.begin(); i++)
        {
            removed.push_back(nums[i]);
            nums.erase(nums.begin() + i);
        }
        for (int i = find(nums.begin(), nums.end(), a) - nums.begin(); i < removed.size(); i++)

    }
    return 0;
}

