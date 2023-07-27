// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 2e3 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;


vector <pi> adj[MM];
int dis[MM];
bool vis[MM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, b, q; cin >> n >> m >> b >> q;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({ w, v });
        adj[v].push_back({ w, u });
    }
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    for (int i = 0; i <= n; i++) dis[i] = INT_MAX;
    dis[b] = 0;
    pq.push({ 0,b });
    while (!pq.empty()) {
        pi curr = pq.top();
        pq.pop();
        int v = curr.second;
        if (vis[v]) continue;
        vis[v] = true;
        for (auto currNode : adj[v]) {
            if (dis[currNode.second] > dis[v] + currNode.first) {
                dis[currNode.second] = dis[v] + currNode.first;
                pq.push({ dis[currNode.second], currNode.second });
            }
        }
    }
    for (int i = 1; i <= q; i++) {
        int x; cin >> x;
        if (dis[x] == INT_MAX) cout << -1;
        else cout << dis[x];
        cout << "\n";
    }
    return 0;
}