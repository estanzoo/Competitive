#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int NM = 5e5 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

vector<pi> adj[NM];
int n, oneEnd;
ll currDiameter = 0;
int pre[NM];
ll dis[NM];

void dfs(int currNode, int par, ll d) {
    pre[currNode] = par;
    dis[currNode] = d;
    if (d > currDiameter) {
        currDiameter = d;
        oneEnd = currNode;
    }
    for (auto c : adj[currNode]) {
        if (c.first != par) dfs(c.first, currNode, d + c.second);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0, a, b, c; i < n-1; i++) {
        cin >> a >> b >> c;
        adj[a].push_back({ b, c });
        adj[b].push_back({ a, c });
    }
    dfs(1, -1, 0);
    currDiameter = 0;
    dfs(oneEnd, -1, 0);
    ll ans = LLONG_MAX;
    for (int u = oneEnd; u != -1; u = pre[u]) {
        ans = min(ans, max(dis[u], currDiameter - dis[u]));
    }
    cout << ans;
    return 0;
}