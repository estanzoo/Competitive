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
    int n, q;
    double min = 1000000001.0;
    cin >> n;
    vector<int>nums;
    loop(n) { cin >> q; nums.push_back(q); }
    sort(nums.begin(), nums.end());
    for (int i = 1; i < n - 1; i++)
    {
        double curr = (nums[i] - nums[i - 1]) / 2.0 + (nums[i+1] - nums[i]) / 2.0;
        if (curr < min) min = curr;
    }
    cout << fixed << setprecision(1) << min;
    return 0;
}

