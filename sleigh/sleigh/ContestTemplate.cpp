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

int n, dis[MM], totDistance = 0;
vector<pi>adj[MM];
bool vis[MM];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0, a, b, c; i < n; i++) {
        cin >> a >> b >> c;
        adj[a].push_back({ b, c });
        adj[b].push_back({ a, c });
        totDistance += c;
    }
    queue <int > q;
    q.push(0);
    dis[0] = 0;
    vis[0] = true;
    int longest = 0;
    while (!q.empty()) {
        int curr = q.front(); q.pop();
        for (auto c : adj[curr]) {
            if (!vis[c.first]) {
                int currDis = dis[curr] + c.second;
                vis[c.first] = true;
                dis[c.first] = currDis;
                if (currDis > longest) longest = currDis;
                q.push(c.first);
            }
        }

    }
    cout << 2 * totDistance - longest;
    return 0;
}

