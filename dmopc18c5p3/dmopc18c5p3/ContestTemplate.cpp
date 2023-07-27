// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long


int ansI = 0;

int sum(ll s, vector<ll> nums)
{
    int left = 0;
    ll sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        while (sum >= s)
        {
            ansI = max(ansI, i-left);
            sum -= nums[left];
            left++;
        }
    }
    return ansI;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ll ans;
    cin >> n >> ans;
    vector <ll> nums;
    for (int i = 0; i < n; i++)
    {
        ll curr;
        cin >> curr;
        if (curr < ans)
            ansI = 1;
        nums.push_back(curr);
    }
    cout << sum(ans, nums);
    return 0;
}

