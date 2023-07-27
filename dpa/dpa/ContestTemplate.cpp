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

vector<int> cost;
int dp[MM];

int func(int a) {
    if (dp[a] != INT_MAX) return dp[a];
    if (a == 1) return dp[a] = 0;
    else if (a - 2 >= 1) return dp[a] = min(func(a-2) + abs(cost[a] - cost[a - 2]), func(a-1) + abs(cost[a] - cost[a - 1]));
    else return dp[a] = func(a-1) + abs(cost[a] - cost[a - 1]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    cost.push_back(0);
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        cost.push_back(a);
    }
    for (int i = 1; i <= n; i++) dp[i] = INT_MAX;
    cout << func(n);
    return 0;
}

