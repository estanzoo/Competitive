// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, changeCounter = 0;
    string current, changed1, changed2;
    cin >> n;
    vector <string> name1;
    vector <string> name2;
    
    for (int i = 0; i < n; i++)
    {
        cin >> current;
        name1.push_back(current);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> current;
        name2.push_back(current);
        if (name2[i].compare(name1[i]) != 0) //not same (order changed)
        {
            changeCounter++;
            if (changeCounter == 1)
                changed1 = name2[i];
            else if (changeCounter == 2)
                changed2 = name2[i];
            else
                break;
        }
    }
    if (changeCounter == 2)
    {
        if (lexicographical_compare(changed1.begin(), changed1.end(), changed2.begin(), changed2.end()) == true)
            cout << changed1 << " " << changed2;
        else
            cout << changed2 << " " << changed1;
    }
    else
        cout << "Death is inevitable";
    return 0;
}

