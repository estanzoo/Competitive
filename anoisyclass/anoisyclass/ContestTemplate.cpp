// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e4 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int n, m, in[MM];
vector<int> adj[MM];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    memset(in, 0, sizeof(in));
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        in[b]++;
        adj[a].push_back(b);
    }
    queue<int> q;
    for (int i = 1; i <= n; i++) if (in[i] == 0) q.push(i);
    int counter = 0;
    while (!q.empty()) {
        int curr = q.front(); q.pop();
        counter++;
        for (int c : adj[curr]) {
            in[c]--;
            if (in[c] == 0) q.push(c);
        }
    }
    if (counter != n) cout << "N\n";
    else cout << "Y\n";
    return 0;
}

