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
    int count = 0;
    string v = "aeiouy";
    string curr;
    cin >> curr;
    for (int i = 0; i < 5; i++)
    {
        if (v.find(curr[i]) != string::npos)
            count++;
    }
    if (count >= 2)
        cout << "good";
    else
        cout << "bad";
    return 0;
}

