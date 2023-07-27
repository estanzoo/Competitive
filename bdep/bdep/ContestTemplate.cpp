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

ll p, y, t;

bool yes(ll n) {
    ll amt = 0;
    for (int a = 0; a < y; a++) {
        amt += n;
        amt = amt + (ll)(amt * p / 100);
        if (amt >= t) return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> p >> y >> t;
    ll lo = 1, hi = t, ans = t;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        if (yes(mid)) {
            ans = mid; hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    cout << ans;
    return 0;
}

