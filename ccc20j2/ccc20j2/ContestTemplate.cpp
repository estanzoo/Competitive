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
    ll p, n, r, prev, total;
    cin >> p >> n >> r;
    prev = n;
    total = n;
    for (int i = 0;; i++)
    {
        ll prevTot = total;
        total += prev * r;
        prev = total - prevTot;
        if (total > p)
        {
            cout << i+1;
            break;
        }
    }

    return 0;
}

