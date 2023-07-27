// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 102;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;
int n, k, a[MM];

void reverse(int a[], int x, int y) {
    for (; x < y; x++, y--) {
        int tmp = a[x]; a[x] = a[y]; a[y] = tmp;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 1, x, y; i <= n; i++) {
        a[i] = i;
    }
    int x, y;
    cin >> x >> y;
    reverse(a, x, y);
    cin >> x >> y;
    reverse(a, x, y);
    int nxt[MM], ans[MM];
    memset(ans, 0, sizeof(ans));
    for (int i = 1; i <=n; i++) nxt[a[i]] = i;
    bool vis[MM];
    memset(vis, false, sizeof(vis));
    for (int i = 1; i <= n; i++) {
        if (vis[i]) continue;
        vector<int> cycle;
        for (int cur = i; !vis[cur]; cur = nxt[cur]) {
            cycle.push_back(cur); vis[cur] = true;
        }
        int rem = k % cycle.size();
        for (int j = 0; j < cycle.size(); j++) {
            int des = cycle[(j + rem) % cycle.size()];
            ans[des] = cycle[j];
        }
    }
    for (int i = 1; i <= n; i++)cout << ans[i] << endl;
    return 0;
}

