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
    int n, m, k, b;
    cin >> n >> m >> k >> b;
    vector <int> nums;
    int firstSum = 0;
    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;
        nums.push_back(curr);
        firstSum += curr;
    }
    int maxSum = 0;
    for (int i = 0; i < n; i++) 
    {
        int sum = 0;
        sum += nums[i];
        for (int j = i + k; j < n; j++)
        {
            sum += nums[j];
            if (sum > maxSum)
                maxSum = sum;
            sum -= nums[j];
        }
    }
    firstSum -= maxSum;
    firstSum += maxSum * b;
    cout << firstSum;
    return 0;
}

