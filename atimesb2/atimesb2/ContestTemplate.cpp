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


ll ppa[MM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    ll mod = 1e9 + 7, max = MM;
    ppa[1] = 1;
    for (int i = 2; i <= max; i++) {
        ppa[i] = (ppa[i - 1] * i)%mod;
    }
    for (int z = 0; z < n; z++) {
        int a, b; 
        cin >> a >> b;
        cout << (ppa[a] * ppa[b]) % mod << endl;
    }
    return 0;
}

