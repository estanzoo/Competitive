// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e5;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

ll dp[MM + 1];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, w; cin >> n >> w;
    for (int i = 0; i < MM+1; i++) dp[i] = (ll)1e18;
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        int wa, v; cin >> wa >> v;
        for (int j = MM; j >= v; j--) {
            dp[j] = min(dp[j], dp[j - v] + wa);
        }
    }
    for (int i = MM; i >= 0; i--) {
        if (dp[i] <= w) {
            cout << i << "\n";
            return 0;
        }
    }
    return 0;
}

