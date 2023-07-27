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
    int tCount = 0, sCount = 0, num;
    string line;
    cin >> num;
    cin.ignore(256, '\n');
    for (int i = 0; i < num; i++)
    {
        getline(cin, line);
        for (int j = 0; j < line.length(); j++)
        {
            if (line[j] == 'S' || line[j] == 's')
                sCount++;
            else if (line[j] == 't' || line[j] == 'T')
                tCount++;
        }
    }
    if (sCount >= tCount)
        cout << "French\n";
    else
        cout << "English" << "\n";
    return 0;
}

