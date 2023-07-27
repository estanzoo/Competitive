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
    string line;
    getline(cin, line);
    string ans = "dQw4w9WgXcQ";
    sort(ans.begin(), ans.end());
    bool y = false;
    if (line.length() >= 11)
    {
        for (int i = 0; i <= line.length() - 11; i++)
        {
            string curr = line.substr(i, 11);
            sort(curr.begin(), curr.end());
            if (curr.compare(ans) == 0)
            {
                y = true;
                break;
            }
        }
    }
    if (y)
        cout << "rickroll";
    else
        cout << "not a rickroll";
    return 0;
}

