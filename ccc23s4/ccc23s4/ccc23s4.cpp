#include <bits/stdc++.h>

using namespace std;


const int MM = 2e3 + 3;

struct edge {
	int v1, v2, l, c;
	edge(int a,int b,int co,int d) {
		v1 = a; v2 = b; l = co; c = d;
	};
};

struct compCost {
	bool operator()(const edge a, const edge b) {
		return a.c > b.c;
	}
};
struct compLen {
	bool operator()(const edge a, const edge b) {
		return a.l < b.l;
	}
};
#define ll long long
int root[MM];

int getRoot(int a)
{
	if (a == root[a]) return a;
	return root[a] = getRoot(root[a]);
}

vector<edge> adj[MM];
int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	int n, m; cin >> n >> m;
	priority_queue<edge, vector<edge>, compCost> q;
	for (int i = 0; i < m; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		adj[a].push_back({ a,b,c,d });
		adj[b].push_back({ a,b,c,d });
		q.push({ a,b,c,d });
		
	}
	for (int i = 1; i <= n; i++) root[i] = i;
	ll numEdge = 0, cost = 0;
	while (!q.empty()) {
		edge curr = q.top(); q.pop();
		int v1 = curr.v1, v2 = curr.v2;
		int r1 = getRoot(v1), r2 = getRoot(v2);
		
		if (r1!= r2) {
			root[r1] = r2;
			numEdge++;
			cost += curr.c;
			if (numEdge == n - 1) break;
		}
	}
	cout << cost;
	return 0;
}
