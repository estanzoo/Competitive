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
    ll n, m; cin >> n >> m;
    if (n * m % 2 == 0) cout << n * m / 2 << " " << n * m / 2 << endl;
    else {
        ll r = (n * m - min(n, m))/2;
        cout << r + min(n, m) << " " << r << endl;
    }
    return 0;
}

