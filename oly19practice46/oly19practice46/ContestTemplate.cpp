#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<double, int> pdi;
const int MM = 1003;

int n, m, x[MM], y[MM]; double dis[MM]; bool vis[MM]; vector<pdi> adj[MM];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
        for (int j = 1; j < i; j++) {
            double d = hypot(x[i] - x[j], y[i] - y[j]);
            adj[i].push_back({ d, j });  adj[j].push_back({ d, i });
        }
    }
    for (int i = 1, u, v; i <= m; i++) {
        cin >> u >> v; adj[u].push_back({ 0, v }); adj[v].push_back({ 0, u });
    }
    priority_queue <pdi, vector<pdi>, greater<pdi>> q;
    fill(dis, dis + MM, 1e18);
    dis[1] = 0.0; q.push({ 0.0, 1 });
    while (!q.empty()) {
        auto curr = q.top(); q.pop();
        double currDis = curr.first;
        int currNode = curr.second;
        vis[currNode] = true;
        for (auto c : adj[currNode]) {
            double d = c.first;
            int node = c.second;
            if (!vis[node] && dis[node] > d) {
                dis[node] = d;
                q.push({ dis[node], node });
            }
        }
    }
    double ans = 0;
    for (int i = 1; i <= n; i++) ans += dis[i];
    cout << fixed << setprecision(2) << ans << endl;
}