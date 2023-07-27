// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e5 + 2;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int n, q, far, currDia = 0;
int dis1[MM], dis2[MM];
vector<pi> adj[MM];

void bfs(int start, int dis[]) {
    queue <int> q;
    bool vis[MM];
    memset(vis, false, sizeof(vis));
    q.push(start);
    vis[start] = true;
    dis[start] = 0;
    while (!q.empty()) {
        int curr = q.front(); q.pop();
        for (auto c : adj[curr]) {
            if (!vis[c.first]) {
                q.push(c.first); vis[c.first] = true;
                dis[c.first] = dis[curr] + c.second;
                if (dis[c.first] > currDia) {
                    far = c.first;
                    currDia = dis[c.first];
                }
            }
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;

    for (int i = 0, a, b, c; i < n - 1; i++) {
        cin >> a >> b >> c;
        adj[a].push_back({ b,c });
        adj[b].push_back({ a,c });
    }
    memset(dis1, 0, sizeof(dis1));
    memset(dis2, 0, sizeof(dis2));
    bfs(1, dis1);
    currDia = 0;
    bfs(far, dis1);
    currDia = 0;
    bfs(far, dis2);
    for (int i = 1; i <= q; i++) {
        int x; cin >> x;
        cout << max(dis1[x], dis2[x]) << "\n";
    }
    return 0;
}