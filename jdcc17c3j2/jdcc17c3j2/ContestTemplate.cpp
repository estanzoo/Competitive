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
    vector <char> prev;
    bool yay = false;;
    int n;
    char c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        prev.push_back(c);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 'O' && prev[i] == c)
        {
            yay = true;
            break;
        }
    }
    if (yay)
        cout << ":)";
    else
        cout << ":(";
    return 0;
}

