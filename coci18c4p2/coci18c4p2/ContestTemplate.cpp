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

int n, qi;
vector<int> adj[MM];
bool vis[MM];
bool canGet[MM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> qi;
    memset(vis, false, sizeof(vis));
    memset(canGet, false, sizeof(canGet));
    for (int i = 0, c, c1; i < qi; i++) {
        cin >> c >> c1;
        adj[c1].push_back(c);
    }
    queue <int> q;
    q.push(1);
    while (!q.empty()) {
        int currNode = q.front(); q.pop();
        for (int a : adj[currNode]) {
            canGet[a] = true;
            if (!vis[a]) {
                vis[a] = true;
                q.push(a);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (canGet[i] || (i == 1 && (adj[1].size() == 0))) cout << '1';
        else cout << '0';
    }
    cout << endl;
    return 0;
}

