// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e3+ 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;


int x[MM], y[MM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    unordered_map<string, int> map;
    for (int i = 0, a, b; i < n; i++) {
        cin >> a >> b;
        x[i] = a; y[i] = b;
        for (int j = 0; j < i; j++) {
            int mx = x[i] + x[j], my = y[i] + y[j];
            ll d = (ll)(x[i] - x[j]) * (x[i] - x[j]) + (ll)(y[i] - y[j]) * (y[i] - y[j]);
            string s = to_string(mx) + "," + to_string(my) + "," + to_string(d);
            if (map.find(s) == map.end()) map.emplace(s, 1);
            else map[s]++;
        }
    }
    ll ans = 0;
    for (auto c : map) {
        int val = c.second;
        ans += (ll)val * (val - 1) / 2;
    }
    cout << ans;
    return 0;
}

