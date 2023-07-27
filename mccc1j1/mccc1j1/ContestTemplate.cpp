// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max = -1, min = 101, curr;
    for (int i = 0; i < 4; i++)
    {
        cin >> curr;
        if (curr < min)
            min = curr;
        if (curr > max)
            max = curr;
    }
    cout << min << "\n" << max << "\n";
    return 0;
}

