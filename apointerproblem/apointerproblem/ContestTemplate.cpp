// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int sum(int s, vector<int> nums)
{
    int ans = INT_MAX;
    int left = 0;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        while (sum >= s) {
            ans = min(ans, i + 1 - left);
            sum -= nums[left];
            left++;
        }
    }
    return (ans != INT_MAX) ? ans : -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;
        arr.push_back(curr);
    }
    cout << sum(q, arr);
    return 0;
}

