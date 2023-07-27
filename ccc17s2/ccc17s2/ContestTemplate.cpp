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
    int n, curr;
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        nums.push_back(curr);
    }
    sort(nums.begin(), nums.end());
    if (n % 2 == 0)
    {
        int index = n / 2;
        cout << nums[n / 2 - 1] << " " << nums[n / 2] << " ";
        for (int i = 1; i < n / 2; i++)
        {
            cout << nums[index - 1 - i] << " " << nums[index + i] << " ";
        }
    }
    else
    {
        int index = n / 2;
        cout << nums[index] << " ";
        for (int i = 1; i <= n / 2; i++)
        {
            cout << nums[index + i] << " " << nums[index - i] << " ";
        }
    }

    return 0;
}

