// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int checkExists(string s)
{
    for (int j = 97; j < 122; j++)
    {
        string curr = "";
        char c = j;
        curr += c;
        curr += c;
        if (s.find(curr) != string::npos)
            return s.find(curr);
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        while (checkExists(a) != -1)
        {
            int index = checkExists(a);
            int c = a[index];
            c++;
            char newC = c;
            a = a.substr(0, index) + newC + a.substr(index + 2);
        }
        while (checkExists(b) != -1)
        {
            int index = checkExists(b);
            int c = b[index];
            c++;
            char newC = c;
            b = b.substr(0, index) + newC + b.substr(index + 2);
        }
        if (a.compare(b) == 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";

        
    }
    return 0;
}

