// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e5 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int dp[MM][2], n;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int currVal;
    cin >> currVal;
    dp[0][0] = 0;
    dp[0][1] = currVal;
    for (int i = 1; i < n; i++) {
        cin >> currVal;
        dp[i][1] = dp[i - 1][0] + currVal;
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][0]);
    }
    cout<< max(dp[n - 1][0], dp[n - 1][1]);
    return 0;
}

