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
    int n, a;
    vector<int>nums;
    cin >> n;
    for (int i = 0; i < n; i++) { cin >> a; nums.push_back(a); }
    sort(nums.begin(), nums.end(), [](auto& lhs, auto& rhs) {
        if (lhs % 10 != rhs % 10) return (lhs % 10 < rhs % 10);
        else return lhs > rhs;
        });
    cout << nums[0];
    for (int i = 1; i < n; i++) cout << " " << nums[i];
    return 0;
}

