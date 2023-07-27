// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e4 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int dp[MM], x, n;
vector<int> coins;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> x >> n;
    for (int i = 1; i < MM; i++) dp[i] = 1e9;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        for (int j = a; j <= x; j++) {
            dp[j] = min(dp[j], dp[j - a] + 1);
        }
    }
    cout << dp[x];
    return 0;
}

