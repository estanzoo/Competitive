// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    bool x = false, y = false;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (y2 == y1)
        x = true;
    if (x1 == x2)
        y = true;
    if (x && !y)
        cout << "x-axis" << "\n";
    else if (y && !x)
        cout << "y-axis" << "\n";
    else
        cout << "neither" << "\n";
    return 0; 
}

