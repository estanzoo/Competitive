// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string key, line;
    getline(cin, key);
    int counter = 0;
    getline(cin, line);
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] >= 65 && line[i] <= 90)
        {
            if (counter >= key.length())
                counter = 0;
            int val = (int)(line[i]) + (int)(key[counter] - 65);
            while (val > 90)
            {
                val -= 26;
            }
            cout << (char)val;
            counter++;
        }
    }
    return 0;
}

