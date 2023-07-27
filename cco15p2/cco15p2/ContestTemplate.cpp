// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 18;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int n, m, dp[MM][1 << MM]; vector <pi> adj[MM];

int fun(int u, int mask) {
    if (u == n - 1) return 0;
    if (dp[u][mask] >= 0) return dp[u][mask];
    for (auto [v, w] : adj[u]) {
        if (!(mask >> v & 1)) dp[u][mask] = max(dp[u][mask], w + fun(v, mask|1 << v));
    }
    return dp[u][mask];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    memset(dp, -0x3f, sizeof(dp));
    for (int i = 0, u, v, w; i < m; i++) {
        cin >> u >> v >> w; adj[u].push_back({ v,w });
    }
    cout << fun(0, 1) << "\n";
    return 0;
}

