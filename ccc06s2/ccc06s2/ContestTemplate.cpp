// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string first, second, third;
    getline(cin, first);
    getline(cin, second);
    getline(cin, third);
    unordered_map <char, char> map;
    for (int i = 0; i < first.length(); i++)
    {
        if (map.find(second[i]) == map.end())
            map.emplace(second[i], first[i]);
    }
    for (int i = 0; i < third.length(); i++)
    {
        if (map.find(third[i]) != map.end())
            cout << map.at(third[i]);
        else
            cout << ".";
    }
    return 0;
}

