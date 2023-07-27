// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int second, first, curr, counter = 2;
    cin >> second >> first;
    while (true)
    {
        curr = second - first;
        if (curr < 0)
            break;
        else
        {
            counter++;
            second = first;
            first = curr;
        }
    }
    cout << counter;
    return 0;
}

