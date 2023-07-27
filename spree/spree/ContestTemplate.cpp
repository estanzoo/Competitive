// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e3 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int n, cap, val[MM], hour[MM];
int dp[MM][MM];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> cap;
    for (int i = 1; i <= n; i++) {
        int a, b; cin >> a >> b;
        val[i] = a; hour[i] = b;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= cap; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= hour[i]) dp[i][j] = max(dp[i][j], dp[i - 1][j - hour[i]] + val[i]);
        }
    }
    cout << dp[n][cap]; 
    return 0;
}

