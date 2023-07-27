// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 2e5 + 5;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int n, a[MM], ans;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int k = 30; k >= 0; k--) {
        ll d0 = 0, d1 = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i] >> k & 1) {
                d1 += (ll)i * (n + 1 - i);
            }
            else {
                d0 += (ll)i * (n + 1 - i);
            }
        }
        if (d1 > d0) ans = ans << 1 | 1;
        else ans <<= 1;
    }
    cout << ans;
    return 0;
}

