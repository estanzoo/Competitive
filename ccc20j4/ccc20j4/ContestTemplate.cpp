// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string line, og;
    getline(cin, line);
    cin >> og;
    vector <string> cyclics;
    bool found = false;
    for (int i = 0; i < og.length(); i++)
    {
        char a = og[0];
        og = og.substr(1, string::npos);
        og += a;
        cyclics.push_back(og);
    }
    for (int i = 0; i < cyclics.size(); i++)
    {
        if (line.find(cyclics[i]) != string::npos)
        {
            found = true;
            break;
        }
    }
    if (found)
        cout << "yes" << "\n";
    else
        cout << "no" << "\n";
    return 0;
}

