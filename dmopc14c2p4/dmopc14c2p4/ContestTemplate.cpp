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
    vector <int> psa;
    int n;
    cin >> n;
    int curr;
    cin >> curr;
    psa.push_back(curr);
    for (int i = 1; i < n; i++)
    {
        cin >> curr;
        psa.push_back(curr + psa[i-1]);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int f, s;
        cin >> f >> s;
        if (f > 0)
            cout << psa[s] - psa[f - 1] << "\n";
        else if (f == 0)
            cout << psa[s] << "\n";
    }
    return 0;
}

