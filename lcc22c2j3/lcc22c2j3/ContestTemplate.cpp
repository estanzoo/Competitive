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
    int n;
    cin >> n;
    vector <int> nums;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        assert(0 <= a && a <= 1e9);
        nums.push_back(a);
    }
    sort(nums.begin(), nums.end());
    int ans = -1;
    for (int i = 0; i < n; i++) {
        ans = max(ans, nums[i] - i);
    }
    assert(1 <= n && n <= 1e6);
    cout << ans;
    return 0;
}

