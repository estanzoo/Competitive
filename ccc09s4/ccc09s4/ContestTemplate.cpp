// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 5e3 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;


vector <pi> adj[MM];
int dis[MM];
bool vis[MM];
vector<pi> cost;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({ w, v });
        adj[v].push_back({ w, u });
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a, b; cin >> a >> b;
        cost.push_back({ a, b });
    }
    int start; cin >> start;
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    for (int i = 0; i <= n; i++) dis[i] = INT_MAX;
    dis[start] = 0;
    pq.push({ 0,start });
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
    int ans = INT_MAX;
    for (int i = 0; i < q; i++) {
        ans = min(dis[cost[i].first] + cost[i].second, ans);

    }
    cout << ans;
    return 0;
}