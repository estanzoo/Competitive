// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int NM = 2e5 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int n, m, a, b;
bool vis[NM];
int dis[NM];
vector<int> adj[NM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> a >> b;
    for (int i = 0, x, y; i < m; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(dis, 0, sizeof(dis));
    memset(vis, false, sizeof(vis));
    queue<int> q;
    q.push(a);
    vis[a] = true;
    while (!q.empty()) {
        int currNode = q.front(); q.pop();
        for (int node : adj[currNode]) {
            if (vis[node]) continue;
            vis[node] = true;
            dis[node] = dis[currNode] + 1;
            if (node == b) {
                cout << dis[node] << "\n";
                return 0;
            }
            q.push(node);
        }

    }
    return 0;
}

