// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, w, h, diamond;
    double hours;
    cin >> l >> w >> h;
    diamond = l * h * 2 + w * l + w * h * 2;
    diamond -= 4 * (h-1);
    diamond -= 2 * w;
    diamond -= 2 * l;
    diamond *= 9;
    hours = diamond / 32.0;
    cout << ceil(hours);
    return 0;
}

