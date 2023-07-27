// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, curr;
    vector <int> nums;
    cin >> n;
    for (int i = 0; i < n; i++) { cin >> curr; nums.push_back(curr); }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) cout << nums[i] << "\n";

    return 0;
}

