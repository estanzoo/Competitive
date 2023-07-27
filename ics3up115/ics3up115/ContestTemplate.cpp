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
    string n;
    cin >> n;
    string vowels = "aeiou";
    bool yes = true;
    for (int i = 0; i < n.length()-1; i++)
    {
        if (vowels.find(n[i]) == string::npos && vowels.find(n[i + 1]) == string::npos)
        {
            yes = false;
            break;
        }
        if (vowels.find(n[i]) != string::npos && vowels.find(n[i + 1]) != string::npos)
        {
            yes = false;
            break;
        }
    }
    if (yes)
        cout << "yes";
    else
        cout << "no";
    return 0;
}

