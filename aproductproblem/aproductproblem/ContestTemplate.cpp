// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll mod = 1000000007;
    ll a, b;
    cin >> a >> b;
    ll curr = a % mod;
    ll curr1 = b % mod;
    curr = (curr * curr1) % mod;
    cout << curr;
    return 0;
}

