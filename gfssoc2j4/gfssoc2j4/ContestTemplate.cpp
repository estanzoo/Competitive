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
    int n, q;
    cin >> n >> q;
    vector <int> psa;
    int curr;
    psa.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        cin >> curr;
        psa.push_back(psa[i-1] + curr);
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        int sum = psa[r] - psa[l-1];
        cout << psa[n] - sum << "\n";
    }
    return 0;
}

