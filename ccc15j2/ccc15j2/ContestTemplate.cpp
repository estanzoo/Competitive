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
    string l;
    getline(cin, l);
    int i = 0;
    int hCount = 0;
    int sCount = 0;
    while (i < l.length() - 2)
    {
        if (l.substr(i, 3).compare(":-)") == 0)
        {
            hCount++;
            i += 3;
        }
        else if (l.substr(i, 3).compare(":-(") == 0)
        {
            sCount++;
            i += 3;
        }
        else
            i++;
    }
    if (sCount == 0 && hCount == 0)
        cout << "none";
    else if (sCount == hCount)
        cout << "unsure";
    else if (sCount > hCount)
        cout << "sad";
    else
        cout << "happy";
    cout << "\n";
    return 0;
}

