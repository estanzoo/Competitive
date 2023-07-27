// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x < 0 && y < 0)
        cout << "3" << "\n";
    else if (x > 0 && y < 0)
        cout << "4" << "\n";
    else if (x > 0 && y > 0)
        cout << "1" << "\n";
    else if (x < 0 && y > 0)
        cout << "2" << "\n";
    return 0;
}

