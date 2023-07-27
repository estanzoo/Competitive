// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include<list>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)
typedef pair <int, int> pi;

int n, m;
vector <int> adj[1000001];
int dis[1000001];
bool vis[1000001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    int curr, c1;
    int colors[n + 1];//n+1
    memset(dis, 0, sizeof(dis));
    memset(vis, false, sizeof(vis));
    for (int i = 1; i <= n; i++) {
        cin >> curr; colors[i] = curr; 
    }

    for (int i = 1; i <= m; i++) {
        cin >> curr >> c1;
        adj[curr].push_back(c1);
        adj[c1].push_back(curr);
    }
    vector<pi> colOne[n + 1]; //n+1
    queue <int> q;
    q.push(1);
    vis[1] = true;
    dis[1] = 0;
    while (!q.empty()) {
        int currNode = q.front(); int currColor = colors[currNode]; q.pop();
        if (colOne[currColor].size() < 2) colOne[currColor].push_back({ dis[currNode], currNode });
        for (int c : adj[currNode]) {
            if (!vis[c]) {
                vis[c] = true;
                dis[c] = dis[currNode] + 1;
                q.push(c);
            }
        }
    }
    
    memset(dis, 0, sizeof(dis));
    memset(vis, false, sizeof(vis));
    q.push(n);
    vector<pi> colN[n+1]; // n+1
    vis[n] = true;
    dis[n] = 0;

    while (!q.empty()) {
        int currNode = q.front();  int currColor = colors[currNode]; q.pop();
        if (colN[currColor].size() < 2) colN[currColor].push_back({ dis[currNode], currNode });
        for (int c : adj[currNode]) {
            if (!vis[c]) {
                vis[c] = true;
                dis[c] = dis[currNode] + 1;
                q.push(c);
            }
        }
    }
    
    int ans = INT_MAX;
    for (int i = 1; i <= n; i++) {
        vector<pi> oneC = colOne[i];
        vector<pi> NC = colN[i];
        for (pi x : oneC) {
            for (pi y : NC) {
                if (x.second != y.second) {
                    ans = min(ans, x.first + y.first);
                }
            }
        }
    
    }
    if (ans == INT_MAX) cout << -1;
    else cout << ans;
    return 0;
}

