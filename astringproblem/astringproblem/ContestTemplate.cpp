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
    unordered_map <char, int> first;
    unordered_map <char, int> second;
    bool valid = true;
    string l1, l2;
    getline(cin, l1);
    getline(cin, l2);
    for (int i = 0; i < l1.length(); i++)
    {
        if (first.find(l1[i]) == first.end())
        {
            first.emplace(l1[i], 0);
        }
        else
        {
            int curr = first.at(l1[i]);
            first.erase(l1[i]);
            first.emplace(l1[i],curr + 1);
        }
    }
    for (int i = 0; i < l2.length(); i++)
    {
        if (second.find(l2[i]) == second.end())
        {
            second.emplace(l2[i], 0);
        }
        else
        {
            int curr = second.at(l2[i]);
            second.erase(l2[i]);
            second.emplace(l2[i], curr + 1);
        }
    }
    for (auto i : first)
    {
        if (second.find(i.first) == second.end())
        {
            valid = false;
            break;
        }
        else
        {
            if (second.at(i.first) < i.second)
            {
                valid = false;
                break;
            }
        }
    }
    if (valid)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

