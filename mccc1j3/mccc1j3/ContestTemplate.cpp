// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    unsigned long long int area;
    cin >> x >> y;
    area = x * y;
    cout << area/4;
    int remainder = area % 4;
    if (remainder == 0)
        cout << ".00" << "\n";
    else if (remainder == 1)
        cout << ".25" << "\n";
    else if (remainder == 2)
        cout << ".50" << "\n";
    else if (remainder == 3)
        cout << ".75" << "\n";
}


