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
    string a;
    cout << "Ready" << "\n";
    while (true)
    {
        getline(cin, a);
        if (a.compare("  ") == 0)
            break;
        if (a.compare("bd") == 0 ||
            a.compare("db") == 0 ||
            a.compare("pq") == 0 ||
            a.compare("qp") == 0)
            cout << "Mirrored pair" << "\n";
        else
            cout << "Ordinary pair" << "\n";
    }
    return 0;
}

