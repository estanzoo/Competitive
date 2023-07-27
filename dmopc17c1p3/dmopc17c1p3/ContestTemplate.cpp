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

vector<pi> adj[MM];
//bool vis[MM];
pi dis[MM];

struct edge {
    int node, distance, numberDangerous;
    edge(int n, int d,int nd) {
        node = n;
        distance = d;
        numberDangerous = nd;
    }
};

bool operator <(edge a, edge b) {
    return a.numberDangerous > b.numberDangerous;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >>n >> m;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({ c, b });
        adj[b].push_back({ c, a });
    }
    priority_queue<edge> pq;
    pq.push({ 1, 0 , 0});
    //vis[1] = true;
    for (int i = 1; i <= n; i++) dis[i] = {INT_MAX, INT_MAX};
    dis[1] = { 0, 0 };
    while (!pq.empty()) {
        auto a = pq.top();
        pq.pop();
        int currNode = a.node;
        int currDan = a.numberDangerous;
        int currDis = a.distance;
        if (currDan > dis[currNode].first) continue;
        if (currDan == dis[currNode].first && currDis > dis[currNode].second) continue;
        for (auto [d, node] : adj[currNode]) {
            if (dis[node].first < dis[currNode].first + d) {
                dis[node].first = dis[currNode].first + d;
                dis[node].second = dis[currNode].second + 1;
                pq.push({ node, currDis + 1, dis[node].first });
            }
            else if (dis[node].first == dis[currNode].first + d && dis[node].second < dis[currNode].second + 1) {
                dis[node].first = dis[currNode].first + d;
                dis[node].second = dis[currNode].second + 1;
                pq.push({ node, currDis + 1, dis[node].first });
            }
        }
    }
    cout << "this is not gonna work :(";
    return 0;
}

