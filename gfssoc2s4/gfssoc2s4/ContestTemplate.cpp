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
typedef pair <ll, int> pl;

int n, m, d;
ll ds[MM], de[MM];
vector<pl> adj[MM], rev[MM];

void dijk(int s, vector<pl> adj[], ll dis[]) {
    priority_queue <pl, vector<pl>, greater<pl>> q;
    fill(dis, dis + MM, 1e18);
    dis[s] = 0; q.push({ dis[s], s });
    while (!q.empty()) {
        pl curr = q.top(); q.pop();
        if (curr.first > dis[curr.second]) continue;
        for (pl a : adj[curr.second]) {
            if (dis[a.first] > dis[curr.second] + a.second) {
                dis[a.first] = dis[curr.second] + a.second;
                q.push({ dis[a.first], a.first });
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
        adj[u].push_back({ v,w }); rev[v].push_back({ u,w });
    }
    dijk(1, adj, ds);
    dijk(n, rev, de);
    cin >> d; ll ans = ds[n];
    for (int i = 1, u, v, w; i <= d; i++) {
        cin >> u >> v >> w;
        ans = min(ans, ds[u] + w + de[v]);
    }
    if (ans == 1e18) cout << -1;
    else cout << ans;
    return 0;
}

