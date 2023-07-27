// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    bool eng = false, math = false;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if ((int)a[i] >= 97 && (int)a[i] <= 122)
            eng = true;
        else if ((int)a[i] >= 48 && (int)a[i] <= 57)
            math = true;
    }
    if (eng && math)
        cout << "Other" << "\n";
    else if (eng)
        cout << "English" << "\n";
    else if (math)
        cout << "Math" << "\n";
    return 0;
}

