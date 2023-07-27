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

int dp(int n, int k, int prev, int x) {
    if (n == 0) return 1;
    int count = 0;
    if (prev == 1) {
        count += dp(n - 1, k, 0, x+1);
    }
    if (n >= k + 1 && prev == 0) {
        count += dp(n - 1, k, 1, 0);
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    cout << dp(n, k, 0, 0);
    return 0;
}

