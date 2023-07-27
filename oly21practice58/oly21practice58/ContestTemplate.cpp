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
    int n, curr; ll k;
    cin >> n >> k;
    int adj[4 + 1]; bool vis[4 + 1]; int d[4 + 1];
    memset(vis, false, sizeof(vis));
    memset(adj, 0, sizeof(adj));
    memset(d, 0, sizeof(d));
    for (int i = 1; i <= n; i++) {
        cin >> curr; adj[i] = curr;
    }
    for (int cur = 1;; cur = adj[cur]) {
        int next = adj[cur];
        if (vis[next]) {
            int cycle = d[cur] - d[next ]+1;
            k %= cycle;
        }
        if (k == 0) {
            cout << cur;
            return 0;
        }
        k--;
        d[next] = d[cur] + 1;
        vis[cur] = true;
    }
    return 0;
}

