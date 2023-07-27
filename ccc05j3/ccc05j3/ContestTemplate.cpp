// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector <char> directions;
    char currC;
    vector <string> locations;
    string currS;
    locations.push_back("into your HOME.");
    while (true)
    {
        cin >> currC >> currS;
        directions.push_back(currC);
        if (currS.compare("SCHOOL") == 0)
            break;
        locations.push_back("onto " +currS + " street.");
    }
    for (int i = directions.size()- 1; i >= 0 ; i--)
    {
        if (directions[i] == 'R')
            cout << "Turn LEFT ";
        else
            cout << "Turn RIGHT ";
        cout << locations[i] << "\n";
    }
    return 0;
}

