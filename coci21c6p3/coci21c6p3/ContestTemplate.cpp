// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 2e5 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int in[MM];
vector<int> adj[MM];
int pm[MM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[b].push_back(a);
        in[a]++;
    }
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (in[i] == 0) q.push(i);
    }
    vector<int> ans;
    while (!q.empty()) {
        int curr = q.front(); q.pop();
        ans.push_back(curr);
        for (int c : adj[curr]) {
            in[c]--;
            if (in[c] == 0) q.push(c);
        }
    }
    if (ans.size() == n) {
        cout << n << "\n";
        for (int i = 0; i < n; i++) cout << ans[i] << " 1\n";
    }
    else cout << "-1\n";
    return 0;
}

