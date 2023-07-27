
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

ll nChoosek(int n)
{
    ll ans = 1;
    for (int i = n; i > (n - 2); i--) {
        ans *= i;
    }
    ans /= 2;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    if (n < 3) {
        cout << 0;
        return 0;
    }
    ll ans = 0;
    for (int i = n / 2; i >= 1; i--) {
        int twos = i;
        int ones = n - twos * 2;
        ans = max(nChoosek(ones) * twos, ans);
    }
    cout << ans;
    return 0;
}

