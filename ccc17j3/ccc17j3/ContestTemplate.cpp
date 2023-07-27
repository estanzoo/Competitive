// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int startX, startY, destX, destY, steps = 0, charge;
    cin >> startX >> startY >> destX >> destY >> charge;
    steps += abs(destX - startX);
    steps += abs(destY - startY);
    if (charge - steps >= 0)
    {
        if ((charge - steps) % 2 == 0)
            cout << "Y";
        else
            cout << "N";
    }
    else
        cout << "N";
    cout << "\n";
    return 0;
}

