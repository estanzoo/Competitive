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


#define pp int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<pp> nums;
    pp n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        pp a; cin >> a; nums.push_back(a);
    }
    pp l = 0, r = 0, curr = 0, ans = -1;
    sort(nums.begin(), nums.end(), greater<int>());
    for (int i = 0; i < n; i++) {
        curr += nums[i];
        if (curr > m) curr -= nums[i];
    }
    cout << curr;
    return 0;
}