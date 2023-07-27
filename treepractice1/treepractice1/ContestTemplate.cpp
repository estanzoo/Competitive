// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int NM = 5e5 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

vector<pi> adj[NM];
int n, m;
ll currDiameter = 0;
vector <int> dia;
vector <int> diaDis;

void dfs(int currNode, int from, ll dis, vector<int> soFar, vector<int> disSoFar) {
    for (pi c : adj[currNode]) {
        if (c.first != from) {
            vector<int> b = soFar;
            vector<int> y = disSoFar;
            ll currDis = dis;
            b.push_back(c.first);
            currDis += c.second;
            y.push_back(c.second);
            if (currDis > currDiameter) {
                currDiameter = currDis;
                dia = b;
                diaDis = y;
            }
            dfs(c.first, currNode, currDis, b, y);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0, a, b, c; i < m; i++) {
        cin >> a >> b >> c;
        adj[a].push_back({ b, c });
        adj[b].push_back({ a, c });
    }
    vector <int> a;
    vector<int> b;
    a.push_back(1);
    dfs(1, -1, 0, a, b);
    int oneEnd = dia[dia.size() - 1];
    currDiameter = 0;
    vector<int> z;
    vector<int> y;
    z.push_back(oneEnd);
    dia.clear();
    dfs(oneEnd, -1, 0, z, y);
    ll currSum = 0, ans = LLONG_MAX;
    for (int i = 0; i < diaDis.size(); i++) {
        currSum += diaDis[i];
        ll currans = max(currSum, currDiameter - currSum);
        ans = min(currans, ans);
    }
    cout << ans << "\n";
    return 0;
}