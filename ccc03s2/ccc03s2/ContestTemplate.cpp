// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

string reWord(string line)
{
    string vow = "aeiou";
    int counter = 0;
    for (int i = line.length() - 1; i >= 0; i--)
    {
        counter++;
        if (vow.find(line[i]) != string::npos)
        {
            return line.substr(i, counter);
        }
        else if (line[i] == ' ')
        {
            return line.substr(i + 1, string::npos);
        }
    }
    return line;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore(256, '\n');
    string line1, line2, line3, line4;
    string last1, last2, last3, last4;
    for (int i = 0; i < n; i++)
    {
        getline(cin, line1);
        transform(line1.begin(), line1.end(), line1.begin(), ::tolower);
        last1 = reWord(line1);
        getline(cin, line2);
        transform(line2.begin(), line2.end(), line2.begin(), ::tolower);
        last2 = reWord(line2);
        getline(cin, line3);
        transform(line3.begin(), line3.end(), line3.begin(), ::tolower);
        last3 = reWord(line3);
        getline(cin, line4);
        transform(line4.begin(), line4.end(), line4.begin(), ::tolower);
        last4 = reWord(line4);
        if (last1.compare(last2) == 0 && last1.compare(last3) == 0 && last1.compare(last4) == 0)
        {
            cout << "perfect" << "\n";
        }
        else if (last1.compare(last2) == 0 && last3.compare(last4) == 0)
        {
            cout << "even" << "\n";
        }
        else if (last1.compare(last3) == 0 && last2.compare(last4) == 0)
        {
            cout << "cross" << "\n";
        }
        else if (last1.compare(last4) == 0 && last2.compare(last3) == 0)
        {
            cout << "shell" << "\n";
        }
        else
            cout << "free" << "\n";
    }

    return 0;
}

