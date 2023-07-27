// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e6 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;
typedef array<int, 4> E;
int n, m, d, p[MM], ans; vector<E> edge;

int fd(int d) {
    if (d == p[d]) return d;
    return p[d] = fd(p[d]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> d;
    for (int i = 1; i <= n; i++)p[i] = i;
    for (int i = 1, u, v, w; i <= m; i++) {
        cin >> u >> v >> w;
        edge.push_back({ w, i >= n, u, v });

    }
    sort(edge.begin(), edge.end());
    for (auto [w, t, u, v] : edge) {
        int fu = fd(u), fv = fd(v);
        if (fu != fv) {
            p[fu] = fv;
            ans += t;
        }
    }
    cout << ans;
    return 0;
}

