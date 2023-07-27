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
    ll n;
    cin >> n;
    if (n == 0)
        cout << 'b';
    else
        cout << 'a';
    for (ll i = 0; i < n - 1; i++)
    {
        cout << 'b';
    }
    return 0;
}

