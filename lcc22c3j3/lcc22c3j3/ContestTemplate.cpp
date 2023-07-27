// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e6 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, ans = 0;
    ll sum = 0;
    vector<int>nums;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a; nums.push_back(a);
        sum += a;
    }
    sort(nums.begin(), nums.end());
    for (int i = n-1; i >=0; i--) {
        if (nums[i] > (double)((sum - nums[i]) / (n - 1))) ans++;
        else break;
    }
    cout << ans;
    return 0;
}

