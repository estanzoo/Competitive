
#include <bits/stdc++.h>

using namespace std;

typedef pair <int, int> pii;
const int numNodes = 5;
const int numEdges = 6;
vector<pii> adj[numNodes+1];
vector<int>dis(numNodes+1, INT_MAX);

void dijkstra(int start) {
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({ 0, start });
    dis[start] = 0;
    while (!q.empty()) {
        int currNode = q.top().second; q.pop();
        for (auto c : adj[currNode]) {
            int node = c.first;
            int currDis = c.second;
            if (dis[node] > dis[currNode] + currDis) {
                dis[node] = dis[currNode] + currDis;
                q.push({ dis[node], node });
            }
        }
    }
}

int main()
{
    for (int i = 0; i < numEdges; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({ b,c });
        adj[b].push_back({ a,c });
    }
    dijkstra(1);
    for (int i = 1; i <= numNodes; i++) {
        cout << dis[i] << " ";
    }
    return 0;
}

