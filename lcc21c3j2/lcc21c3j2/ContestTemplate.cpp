// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, curr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        cout << (char) (curr + 65) << "\n";
    }
    return 0;
}

