// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double p, q, w;
    bool b = false;
    cin >> p >> q >> w;
    for (int i = 0; i <= 100; i++)
    {
        if (round(p * 0.01 * (100.0 - w) + i * 0.01 * w) >= q)
        {
            cout << i << "\n";
            b = true;
            break;
        }
    }
    if (b == false)
        cout << "DROP THE COURSE" << "\n";
    return 0;
}

