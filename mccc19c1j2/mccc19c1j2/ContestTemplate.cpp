// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max = -1, curr, index;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        if (curr > max)
        {
            index = i + 1;
            max = curr;
        }
    }
    cout << index << "\n";
    return 0;
}

