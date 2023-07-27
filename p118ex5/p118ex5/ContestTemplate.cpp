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
    int n;
    cin >> n;
    vector <double> nums;
    double max = -1.0, curr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        nums.push_back(curr);
        if (max < curr)
            max = curr;
    }
    for (int i = 0; i < n; i++)
    {
        double current = nums[i];
        if (nums[i] != max)
            cout << fixed << setprecision(2) << nums[i] << "\n";
    }
    cout << fixed << setprecision(2) << max << "\n";
    return 0;
}

