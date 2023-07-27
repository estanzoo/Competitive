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

int ds[MM], de[MM];
vector<int> adj[MM];
vector<int> targets;
bool vis1[MM], vis2[MM];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, k, a, b; cin >> n >> m >> k >> a >> b;
    for (int i = 0; i < k; i++) {
        int x; cin >> x; targets.push_back(x);
    }
    for (int i = 0; i < m; i++) {
        int  x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue <int> q;
    q.push(a);
    vis1[a] = true;
    ds[a] = 0;
    while (!q.empty()) {
        int currNode = q.front(); q.pop();
        for (int node : adj[currNode]) {
            if (!vis1[node]) {
                vis1[node] = true;
                ds[node] = ds[currNode]+ 1;
                q.push(node);
            }
        }
    }
    q.push(b);
    vis2[b] = true;
    de[b] = 0;
    while (!q.empty()) {
        int currNode = q.front(); q.pop();
        for (int node : adj[currNode]) {
            if (!vis2[node]) {
                vis2[node] = true;
                de[node] = de[currNode]+ 1;
                q.push(node);
            }
        }
    }
    int ans = INT_MAX;
    for (int i = 0; i < targets.size(); i++) {
        ans = min(ans, de[targets[i]] + ds[targets[i]]);
    }
    cout << ans;
    return 0;
}

