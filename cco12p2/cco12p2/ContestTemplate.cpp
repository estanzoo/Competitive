// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 2e4 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int n, m;
vector<pi> adj[MM];
vector<pi> rev[MM];
int d1[MM], dn[MM], e[(int)1e5 + 3][3];


void dijk(int s, vector<pi> adj[], int dis[]) {
    fill(dis, dis + MM, (int)1e9);
    priority_queue<pi, vector<pi>, greater<pi>> q;
    dis[s] = 0;
    q.push({ dis[s], s });
    while (!q.empty()) {
        int u = q.top().second;
        int d = q.top().first;
        q.pop();
        if (d > dis[u]) continue;
        for (pi a : adj[u]) {
            if (dis[a.second] > dis[u] + a.first) {
                dis[a.second] = dis[u] + a.first;
                q.push({ dis[a.second], a.second });
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1, u, v, w; i <= m; i++) {
        cin >> u >> v >> w;
        adj[u].push_back({ w,v });
        rev[v].push_back({ w, u });
        e[i][0] = u;
        e[i][1] = v;
        e[i][2] = w;
    }
    dijk(1, adj, d1);
    dijk(n, rev, dn);
    if (d1[n] == 1e9) { cout << -1; return 0; }
    int ans = 1e9;
    for (int i = 1; i <= m; i++) {
        int tmp = d1[e[i][0]] + e[i][2] + dn[e[i][1]];
        if (tmp > d1[n] && tmp < ans) ans = tmp;

    }
    if (ans == 1e9) cout << -1;
    else cout << ans;
    return 0;
}