// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 10;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;
int coins[MM], dp[103];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (int x = 0; x < 5; x++) {
        int tot, n; cin >> tot >> n;
        for (int i = 1; i <= tot; i++) dp[i] = 1e9;
        for (int i = 1; i <= n; i++) {
            cin >> coins[i];
        }
        for (int i = 1; i <= n; i++) {
            for (int j = coins[i]; j <= tot; j++) {
                dp[j] = min(dp[j], dp[j - coins[i]] + 1);
            }
        }
        cout << dp[tot] << "\n";
    }
    return 0;
}

