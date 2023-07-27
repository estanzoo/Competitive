// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c, m, k, hi;
    cin >> c >> m >> k;
    if (c > m)
    {
        hi = c;
    }
    else
    {
        hi = m;
    }
    cout << k * hi << "\n";

    return 0;
}

