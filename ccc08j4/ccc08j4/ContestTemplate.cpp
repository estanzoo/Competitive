// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

string operators = "+-";
string preToPost(string a)
{
    stack<string> s;
    int length = a.size();
    for (int i = length - 1; i >= 0; i--)
    {
        if (operators.find(a[i]) != string::npos)
        {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            string temp = op1 + op2 + a[i];
            s.push(temp);
        }
        else {
            s.push(string(1, a[i]));
        }
    }
    return s.top();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string curr;
    while (true)
    {
        getline(cin, curr);
        if (curr.compare("0") == 0) break;
        curr.erase(remove(curr.begin(), curr.end(), ' '), curr.end());
        string newStr = preToPost(curr);   
        for (int i = 0; i < newStr.length(); i++)
        {
            if (i < newStr.length() - 1) cout << newStr[i] << " ";
            else cout << newStr[i] << "\n";
        }
    }
    return 0;
}

