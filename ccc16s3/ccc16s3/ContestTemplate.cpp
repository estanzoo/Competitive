// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int NM = 1e5 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

vector<int> adj[NM];
unordered_set<int> pho;
bool vis[NM];
bool needed[NM];
int far, farDis = -1;
int dis[NM];

int mark(int currNode) {
    int v = 0;
    for (int c : adj[currNode]) {
        if (!vis[c]) {
            vis[c] = true;
            v += mark(c);
        }
    }
    v += v > 0 || pho.find(currNode) != pho.end() ? 2 : 0;
    needed[currNode] = v != 0;
    return v;
}

void bfs(int start) {
    queue <int> q;
    q.push(start);
    vis[start] = true;
    while (!q.empty()) {
        int curr = q.front(); q.pop();
        far = curr;
        for (int c : adj[curr]) {
            if (!vis[c] && needed[c]) {
                q.push(c); vis[c] = true;
                dis[c] = dis[curr] + 1;
                farDis = max(farDis, dis[c]);
            }
        }
    }

}

int N, M, start;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    memset(vis, false, sizeof(vis));
    memset(needed, false, sizeof(needed));
    memset(dis, 0, sizeof(dis));
    for (int i = 0, a; i < M; i++) {
        cin >> a; 
        pho.emplace(a);
        start = a;
    }
    for (int i = 0, a, b; i < N-1; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vis[start] = true;
    int v = mark(start)-2;
    memset(vis, false, sizeof(vis));
    bfs(0);
    int firstFar = far;
    memset(vis, false, sizeof(vis));
    memset(dis, 0, sizeof(dis));
    farDis = -1;
    bfs(firstFar);
    cout << v - farDis << "\n";
    return 0;
}

