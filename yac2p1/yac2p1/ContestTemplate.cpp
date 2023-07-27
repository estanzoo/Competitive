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
    ll a, b, c, d;
    for (int i = 0; i < n; i++)
    {
        bool yes = false;
        cin >> a >> b >> c >> d;
            
        if (a*c < (b-a)*(d-c))
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}

