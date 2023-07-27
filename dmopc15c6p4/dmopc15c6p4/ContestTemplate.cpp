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

int n, k;
int roots[MM];
vector<int> adj[MM];

int getRoot(int a) {
    if (a == roots[a]) return a;
    return roots[a] = getRoot(roots[a]);
}

struct edge {
    int u, v, w;
};
bool comp(const edge& a, const edge& b) {
    return a.w < b.w;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) roots[i] = i;
    vector<edge> lst;
    for (int i = 1; i < n; i++) {
        int h; cin >> h;
        lst.push_back({ i, i + 1, h });
    }
    for (int i = 1; i + k <= n; i++) {
        lst.push_back({ i, i + k, 0 });
    }
    sort(lst.begin(), lst.end(), &comp); 
    int ac = 0, ans = 0;
    for (edge e : lst) {
        int root1 = getRoot(e.u), root2 = getRoot(e.v);
        if (root1 != root2) {
            roots[root1] = root2; 
            ac++;
            ans += e.w;
        }
        if (ac == n - 1) break;
    }
    cout << ans;
    return 0;
}

