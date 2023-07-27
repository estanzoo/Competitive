// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e6 + 3;
#define ll long long
#define loop(x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k; k = abs(k);
    int ans = INT_MAX;
    loop(n) {
        int a; cin >> a;
        if (k % a == 0) {
            ans = min(ans, k / a);
        }
    }
    if (ans == INT_MAX) cout << "This is not the best time for a trip.";
    else cout << ans;
    return 0;
}

