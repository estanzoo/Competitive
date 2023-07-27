// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    bool yes = false;
    cin >> s;
    if (s.length() >= 7)
    {
        for (int i = 0; i <= s.length() - 7; i++)
        {
            if (s.substr(i, 7).compare("demello") == 0)
            {
                yes = true;
                break;
            }
        }
    }
    if (yes)
        cout << "liar" << "\n";
    else
        cout << "what are we going to do?" << "\n";    
    return 0;
}

