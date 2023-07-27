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
int n, m;
vector<int> adj[MM];
int roots[MM];
int getRoot(int a) {
    if (roots[a] == a)return a;
    return roots[a] = getRoot(roots[a]);
}
int getCon() {
    int ans = 0;
    unordered_set<int> sett;
    for (int i = 1; i <= n; i++) {
        int currRoot = getRoot(i);
        if (sett.find(currRoot) != sett.end())ans++;
        else sett.emplace(currRoot);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    vector<pi> que;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        que.push_back({ a,b });
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++) roots[i] = i;
    for (int i = m - 1; i >= 0; i--) {
        pi curr = que[i];
        roots[curr.first] = roots[curr.second];
        int a = getCon();
        ans.push_back(a);
    }
    for (int i = 0; i < n; i--) {
        cout << ans[i] << endl;
    }
    return 0;
}

