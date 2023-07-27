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

vector<pi> adj[NM];
int n, m, oneEnd;
ll currDiameter = 0;
vector <int> diaDis;
int pre[NM];
ll dis[NM];
/*
void dfs(int currNode, int from, ll dis, vector<int> disSoFar) {
    for (pi c : adj[currNode]) {
        if (c.first != from) {
            vector<int> y = disSoFar;
            ll currDis = dis;
            currDis += c.second;
            y.push_back(c.second);
            if (currDis > currDiameter) {
                currDiameter = currDis;
                diaDis = y;
                oneEnd = c.first;
            }
            dfs(c.first, currNode, currDis, y);
        }
    }
}
*/

void dfs(int currNode, int par, ll d) {
    pre[currNode] = par;
    dis[currNode] = d;
    if (d > currDiameter) {
        currDiameter = d; 
        oneEnd = currNode;
    }
    for (auto c : adj[currNode]) {
        if (c.first != par) 
            dfs(c.first, currNode, d + c.second);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    assert(m == n - 1);
    assert(n <= 1e5);
    for (int i = 0, a, b, c; i < m; i++) {
        cin >> a >> b >> c;
        adj[a].push_back({ b, c });
        adj[b].push_back({ a, c });
        assert(c <= 1e9);
    }
    /*
    vector<int> b;
    dfs(1, -1, 0, b);
    currDiameter = 0;
    vector<int> y;
    dfs(oneEnd, -1, 0, y);
    ll currSum = 0, ans = LLONG_MAX;
    for (int i = 0; i < diaDis.size(); i++) {
        currSum += diaDis[i];
        ll currans = max(currSum, currDiameter - currSum);
        ans = min(currans, ans);
    }
    cout << ans << "\n";
    */
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