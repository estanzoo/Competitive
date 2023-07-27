// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string area, local; 
    bool legal = true, valuable = false;
    cin >> area >> local;
    if (area.compare("416") == 0)
        valuable = true;
    else if (area.compare("647") != 0 && area.compare("437") != 0)
        legal = false;
    if (local.length() != 7)
        legal = false;
    if (valuable && legal)
        cout << "valuable" << "\n";
    else if (legal)
        cout << "valueless" << "\n";
    else
        cout << "invalid" << "\n";
    return 0;
}

