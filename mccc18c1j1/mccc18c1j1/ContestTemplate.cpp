// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (m % n == 0)
        cout << "Hooray! The cookies can be distributed evenly!" << "\n";
    else
        cout << "Boo! The cookies cannot be distributed evenly :(" << "\n";
    return 0;
}

