// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
int length;
unordered_set<string> ans;
void no(string a, string b, string current)
{
    if (current.length() == length)
    {
        ans.emplace(current);
    }
    if (a.length() >= 1)
        no(a.substr(1), b, current + a[0]);
    if (b.length() >= 1)
        no(a, b.substr(1), current + b[0]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a, b;
    cin >> a >> b;
    length = a.length() + b.length();
    no(a, b, "");
    for (string a : ans)
        cout << a << "\n";
    return 0;
}

