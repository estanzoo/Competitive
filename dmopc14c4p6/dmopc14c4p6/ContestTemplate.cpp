// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 5e5+2;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int n, far;
int dis1[MM], dis2[MM];
vector<int> adj[MM];

void bfs(int start, int dis[]) {
    queue <int> q;
    bool vis[MM];
    memset(vis, false, sizeof(vis));
    q.push(start);
    vis[start] = true;
    dis[start] = 0;
    while (!q.empty()) {
        int curr = q.front(); q.pop();
        far = curr;
        for (int c : adj[curr]) {
            if (!vis[c]) {
                q.push(c); vis[c] = true;
                dis[c] = dis[curr] + 1;
            }
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i = 0, a, b; i < n-1; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(dis1, 0, sizeof(dis1));
    memset(dis2, 0, sizeof(dis2));
    bfs(1, dis1);
    bfs(far, dis1);
    bfs(far, dis2); 
    for (int i = 1; i <= n; i++) {
        cout << max(dis1[i], dis2[i]) + 1 << "\n";
    }
    return 0;
}

