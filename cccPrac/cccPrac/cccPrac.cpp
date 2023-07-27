#include <bits/stdc++.h>

using namespace std;
const int MM = 5e5 + 3;
#define pi pair<int, int>

vector<pi> adj[MM];

int dis[MM];
int pre[MM];
int currDia = 0;
int n;
int oneEnd;

void dfs(int a, int last, int d) {
	dis[a] = d;
	pre[a] = last;
	if (d > currDia) {
		currDia = d;
		oneEnd = a;
	}
	for (pi c : adj[a]) {
		if (c.first != last) {
			dfs(c.first, a, c.second + d);
		}
	}
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		adj[a].push_back({ b, c });
		adj[b].push_back({ a, c });

	}
	dfs(1, -1, 0);
	memset(dis,0, sizeof(dis));
	memset(pre, 0,sizeof(pre));
	dfs(oneEnd, -1, 0);
	int ansD = 0, ansR = INT_MAX;
	for (int i = oneEnd; i!=-1; i = pre[i]) {
		ansR = min(ansR, max(dis[i], currDia - dis[i]));
	}

	cout << currDia << "\n" << ansR;
}