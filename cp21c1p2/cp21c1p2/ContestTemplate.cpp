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
    int n;
    ll c = 0;
    vector <ll> a, b;
    cin >> n;
    for (int i = 0; i < 2*n+1; i++) {
        ll curr; cin >> curr;
        c ^= curr;
        a.push_back(curr);
    }
    for (int i = 0; i < 2*n+1; i++) {;
        ll curr; cin >> curr;
        c ^= curr;
        b.push_back(curr);
    }
    for (int i = 0; i < a.size(); i++) {
        a[i] ^= c;
    }
    sort(a.begin(), a.end()); sort(b.begin(), b.end());
    if (a == b) cout << c;
    else cout << -1;
    return 0;
}

