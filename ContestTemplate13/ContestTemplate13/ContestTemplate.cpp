// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    bool yes = true;
    string curr;
    cin >> n;
    vector <string> name1;
    vector <string> name2;
    unordered_map<string, string> pairs;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        name1.push_back(curr);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        name2.push_back(curr);
        if (name2[i].compare(name1[i]) == 0)
        {
            yes = false;
        }
    }
    for (int i = 0; i < n; i++) pairs.emplace(name1[i], name2[i]);
    for (int i = 0; i < n; i++)
    {
        if (name1[i].compare(pairs.at(pairs.at(name1[i]))) == 0)
            ;
        else
        {
            yes = false;
            break;
        }
    }
    if (yes)
        cout << "good";
    else
        cout << "bad";
    return 0;
}

