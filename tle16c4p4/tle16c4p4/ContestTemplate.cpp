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

int n, m, q, oneEnd;
vector<pi> adj[MM];
bool vis[MM], vis2[MM];
ll dis[MM], currDiameter = -1;
vector<ll>diaLength;

int bfsEnd(int start) {
    vis[start] = true;
    queue<int> q;
    q.push(start);
    ll maxE = 0;
    int end = start;
    while (!q.empty()) {
        int currNode = q.front(); q.pop();
        if (dis[currNode] > maxE) {
            maxE = dis[currNode];
            end = currNode;
            oneEnd = end;
        }
        for (auto c : adj[currNode]) {
            if (!vis[c.first]) {
                vis[c.first] = true;
                dis[c.first] = dis[currNode] + c.second;
                q.push(c.first);
            }
        }
    }
    return end;
}

ll bfsDia(int end) {
    queue<int> q;
    ll maxDia = 0;
    q.push(end);
    vis2[end] = true;
    dis[end] = 0;
    while (!q.empty()) {
        int currNode = q.front(); q.pop();
        maxDia = max(maxDia, dis[currNode]);
        for (auto c : adj[currNode]) {
            if (!vis2[c.first]) {
                vis2[c.first] = true;
                dis[c.first] = dis[currNode] + c.second;
                q.push(c.first);
            }
        }
    }
    return maxDia;
}

int pre[MM];

void dfs(int currNode, int par, ll d) {
    pre[currNode] = par;
    dis[currNode] = d;
    vis[currNode] = true;
    if (d > currDiameter) {
        currDiameter = d;
        oneEnd = currNode;
    }
    for (auto c : adj[currNode]) {
        if (c.first != par)
            dfs(c.first, currNode, d + c.second);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> q;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({ b, c });
        adj[b].push_back({ a, c });
    }
    if (q == 1) {
        ll ans = 0;
        for (int i = 1; i <= n; i++) {
            if (!vis[i]) {
                int end = bfsEnd(i);
                ans += bfsDia(end) + 1;
            }
        }
        cout << ans - 1 << endl;
    }
    else {
        ll ans = 0;
        vector<ll> rads;
        for (int i = 1; i <= n; i++) {
            if (!vis[i]) {
                dfs(i, -1, 0);
                currDiameter = -1;
                dfs(oneEnd, -1, 0);
                ll ansA = LLONG_MAX;
                for (int u = oneEnd; u != -1; u = pre[u]) {
                    ansA = min(ansA, max(dis[u], currDiameter - dis[u]));
                }
                rads.push_back(ansA);
                currDiameter = -1;
            }
        }
        sort(rads.rbegin(), rads.rend());
        ans = rads[0];
        if (rads.size() > 1 && rads[0] == rads[1]) ans++;
        cout << ans;
    }

    return 0;
}