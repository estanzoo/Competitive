// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    char c;
    cin >> line >> c;
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] != c)
            cout << line[i];
        else
            cout << "\n";
    }
    return 0;
}

