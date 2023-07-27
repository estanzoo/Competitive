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

int root[MM];
bool vis[MM];
int getRoot(int a) {
    if (root[a] == a) return a;
    return root[a] = getRoot(root[a]);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    vector<int> ans;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) root[i] = i;
    for (int i = 1; i <= m; i++) {
        int a, b; cin >> a >> b;
        int r1 = getRoot(a);
        int r2 = getRoot(b);
        if (r1 != r2) {
            root[r1] = r2;
            ans.push_back(i);
        }
    }
    if (ans.size() != n - 1) cout << "Disconnected Graph";
    else {
        for (int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
    }
    return 0;
}

