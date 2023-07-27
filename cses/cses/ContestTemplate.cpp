// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string line;
    getline(cin, line);
    char currChar = line[0];
    int max = 0, curr = 1;
    for (int i = 1; i < line.length(); i++)
    {
        if (line[i] == currChar)
            curr++;
        else
        {
            currChar = line[i];
            if (curr > max)
                max = curr;
            curr = 1;
        }
    }
    if (curr < max)
        cout << max;
    else
        cout << curr;
    return 0;
}

