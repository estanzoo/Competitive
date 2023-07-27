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
    int b, n, j;
    cin >> b >> n >> j;
    vector <ll> d(b + 1, 0);
    int r, l, k;
    for (int i = 0; i < j; i++)
    {
        cin >> r >> l >> k;
        r--;
        l--;
        d[r] += k;
        d[l + 1] -= k;
    }
    ll curr, prev;
    int ans = 0;
    for (int i = 0; i < b; i++)
    {
        if (i == 0) {
            curr = d[i];
            prev = d[i];
            if (curr < n)
            {
                ans++;
            }
        }
        else {
            curr = d[i] + prev;
            if (curr < n)
                ans++;
            prev = curr;
        }
    }
    cout << ans;
    return 0;
}

