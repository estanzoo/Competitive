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

ll t, p, k, x, ans;
bool good(ll n)
{
    ll currNum = t;
    for (ll i = 1ll; i <= k; i++) {
        ll currTotal = currNum + currNum * p /  100ll;
        currTotal -= n;
        if (currTotal < x && t > x) return false;
        currNum = currTotal;
    }
    return (currNum >= x);

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t >> p >> k >> x;
    ll lo = 0, hi = 2e14 + 1;
    while (true) {
        if (lo > hi) {
            break;
        }
        ll mid = (lo + hi) / 2;
        if (!good(mid)) {
            hi = mid - 1;
        }
        else {
            ans = mid;
            lo = mid  +1;
        }
    }
    cout << ans << "\n";
    return 0;
}

