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
        int a; cin >> a;
        int b; cin >> b;
        int r1 = getRoot(b);
        for (int j = 0; j < a - 1; j++) {
            int c; cin >> c; int r2 = getRoot(c);
            root[r2] = r1;
        }
    }
    int root1 = getRoot(1);
    ans.push_back(1);
    for (int i = 2; i <= n; i++) {
        if (getRoot(i) == root1) ans.push_back(i);
    }
    cout << ans.size() << endl;
    cout << ans[0];
    for (int i = 1; i < ans.size(); i++) {
        cout << " " << ans[i];
    }
    cout << endl;
    return 0;
}

