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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    int cnt = 0;
    while (n) {
        cnt++;
        n >>= 1;
    }
    for (int i = 0; i < cnt; i++) cout << 1;
    return 0;
}

