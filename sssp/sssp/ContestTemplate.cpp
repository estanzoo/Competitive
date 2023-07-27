// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e3 + 3;
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
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({c, b });
        adj[b].push_back({ c, a });
    }
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    for (int i = 0; i <= n; i++) dis[i] = INT_MAX;
    dis[1] = 0;
    pq.push({ 0,1 });
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
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) cout << -1 << "\n";
        else cout << dis[i] << "\n";
    }
    return 0;
}

