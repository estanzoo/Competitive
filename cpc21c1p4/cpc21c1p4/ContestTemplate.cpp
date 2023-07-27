// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 3e5 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int n, m, vis[MM];
vector<int> adj[MM];
void dfs(int u, int max) {
    vis[u] = max;
    for (int c : adj[u]) {
        if (vis[c] == 0) dfs(c, max);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int a, b; cin >> a >> b;
        adj[b].push_back(a);
    }
    for (int i = n; i >= 1; i--) {
        if (vis[i] == 0) dfs(i, i);
    }
    for (int i = n; i >= 1; i--) {
        if (vis[i] > i) {
            cout << i << " " << vis[i];
            return 0;
        }
    }
    cout << -1;
    return 0;
}

