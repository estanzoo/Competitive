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
    int n, q, curr;
    cin >> n >> q;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        arr.push_back(curr);
    }
    for (int i = 0; i < q; i++)
    {
        cin >> curr;
        if (curr == 1)
        {
            int l, r, v, k;
            cin >> l >> r >> v >> k;
            for (int j = l-1; j <= r-1; j++)
            {
                if (arr[j] > k)
                {
                    arr[j] -= v;
                }
            }
        }
        else
        {
            int l, r, k;
            ll sum = 0;
            cin >> l >> r >> k;
            for (int j = l-1; j <= r-1; j++)
            {
                if (arr[j] > k)
                    sum += arr[j];
            }
            cout << sum << '\n';
        }
    }
    return 0;
}

