// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

string base(string s, int a, int b)
{
    string curr = "";
    string reverse ="";
    int num = stoi(s, nullptr, a);
    while (num > 0)
    {
        curr += reVal (num % b);
        num /= b;
    }
    for (int i = curr.length() - 1; i >= 0; i--)
    {
        reverse += curr[i];
    }
    return reverse;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int currBase, baseTo;
    string currNum;
    for (int i = 0; i < n; i++)
    {
        cin >> currBase >> currNum >> baseTo;
        cout << base(currNum, currBase, baseTo) << "\n";
    }
    return 0;
}

