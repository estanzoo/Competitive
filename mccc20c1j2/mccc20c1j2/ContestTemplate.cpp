// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w = 0, l = 0, curr;
    char currChar;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr >> currChar;
        if (currChar == 'W')
            w += curr;
        else if (currChar == 'L')
            l += curr;
    }
    cout << l << " " << w << "\n";
    return 0;
}

