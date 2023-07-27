// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    string currInt, currOP, temp;
    cin >> n >> q;
    string currName;
    unordered_map <string, string> book;
    unordered_map <string, string> bookPhone;
    for (int i = 0; i < n; i++)
    {
        cin >> currName >> currInt;
        book.emplace(currName, currInt);
        bookPhone.emplace(currInt, currName);
    }
    for (int i = 0; i < q; i++)
    {
        cin >> currOP >> temp;
        if (currOP.compare("phone") == 0)
            cout << book.at(temp) << "\n";
        else
            cout << bookPhone.at(temp) << "\n";
    }
    return 0;
}