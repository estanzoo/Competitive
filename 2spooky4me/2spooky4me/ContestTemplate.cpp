// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e9 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

map<int, int> diff;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, s;
    cin >> n >> m >> s;

    for (int i = 0; i < n; i++) {
        int a, b, c; cin >> a >> b >> c;
        diff[a] += c;
        diff[b + 1] -= c;
    }
    int ans = 0, curr = 0, prevV = 0, prevK = 0;
    for (auto c : diff) {
        c.second += prevV;
        if (prevV < s) {
            ans += c.first - prevK;
        }
        prevV = c.second;
        prevK = c.first;
    }
    if (prevK != m && prevV < s) ans += (m - prevK );
    cout << ans;
    return 0;
}

