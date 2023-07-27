// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <string>  
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin >> a;
    while (a.compare("X") != 0)
    {
        while (a.find("ANA") != string::npos || a.find("BAS") != string::npos)
        {
            size_t i1 = a.find("ANA");
            if (i1 != string::npos)
            {
                a = a.substr(0, i1) + "A" + a.substr(i1 + 3);
            }
            size_t i2 = a.find("BAS");
            if (i2 != string::npos)
            {
                a = a.substr(0, i2) + "A" + a.substr(i2 + 3);
            }
        }
        if (a.compare("A") == 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";        
        cin >> a;
    }
    return 0;
}

