// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e5 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int dp[MM], vals[MM], n, k;

int findDp(int a) {
    if (a == 1) return 0;
    if (dp[a] != 1e9) return dp[a];
    for (int i = 1; i <= k; i++) {
        if (a - i < 1) continue;
        dp[a] = min(dp[a], findDp(a - i) + abs(vals[a - i] - vals[a]));
    }
    return dp[a];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> vals[i];
    for (int i = 1; i <= n; i++) dp[i] = 1e9;
    findDp(n);
    cout << dp[n];
    return 0;
}


