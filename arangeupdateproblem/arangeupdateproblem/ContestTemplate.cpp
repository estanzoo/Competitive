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
    vector <ll> nums;
    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;
        nums.push_back(curr);
    }
    int l, r, v;
    vector<ll> diff(n + 1);
    diff[0] = nums[0];
    diff[n] = 0;
    for (int i = 1; i < n; i++) diff[i] = nums[i] - nums[i - 1];
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r >> v;
        l--;
        r--;
        diff[l] += v;
        diff[r + 1] -= v;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            nums[i] = diff[i];
        else
            nums[i] = diff[i] + nums[i - 1];
        cout << nums[i] << " ";
    }
    return 0;
}