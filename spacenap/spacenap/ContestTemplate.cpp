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

int n, m;
vector<int> coord[MM];

ll check(int x, int y, int z) {
    ll s = 0;
    for (int i = 0; i < m; i++) {
        s += abs(coord[0][i] - x);
        s += abs(coord[1][i] - y);
        s += abs(coord[2][i] - z);
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    int x[8] = { 1, 1, 1, 1, n, n, n, n};
    int y[8] = {1, 1, n, n, 1, 1, n, n};
    int z[8] = {1, n, 1, n, 1, n, 1, n};
    ll ans = 0;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        coord[0].push_back(a);
        coord[1].push_back(b);
        coord[2].push_back(c);
    }
    for (int i = 0; i < 8; i++) {
        ans = max(ans, check(x[i], y[i], z[i]));
    }
    cout << ans;
    return 0;
}

