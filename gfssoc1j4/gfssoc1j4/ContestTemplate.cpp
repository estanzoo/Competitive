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
    string one, two, three;
    bool g = false, t = false;
    cin >> one >> two >> three;
    if (one[0] == one[1] && one[0] == one[2])
    {
        if (one[0] == 'O')
            g = true;
        else
            t = true;
    }
    if (two[0] == two[1] && two[0] == two[2])
    {
        if (two[0] == 'O')
            g = true;
        else
            t = true;
    }
    if (three[0] == three[1] && three[0] == three[2])
    {
        if (three[0] == 'O')
            g = true;
        else
            t = true;
    }
    for (int i = 0; i < 3; i++)
    {
        if (one[i] == two[i] && one[i] == three[i])
        {
            if (one[i] == 'O')
                g = true;
            else
                t = true;
        }   
    }
    if (one[0] == two[1] && one[0] == three[2])
    {
        if (one[0] == 'O')
            g = true;
        else
            t = true;
    }
    if (one[2] == two[1] && one[2] == three[0])
    {
        if (one[2] == 'O')
            g = true;
        else
            t = true;
    }
    if (g && t)
        cout << "Error, redo";
    else if (g)
        cout << "Griffy";
    else if (t)
        cout << "Timothy";
    else
        cout << "Tie";
    return 0;
}

