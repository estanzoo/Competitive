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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        if (p1 * p2 != p3)
            cout << "16 BIT S/W ONLY";
        else
            cout << "POSSIBLE DOUBLE SIGMA";
    }
    return 0;
}

