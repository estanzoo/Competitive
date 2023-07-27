#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string findInteger(string n)
{
    int i = 0;
    string num = "";
    for (int i = 0;;i++)
    {
        if (n[i] >= 48 && n[i] <= 57)
            num += n[i];
        else
            break;
    }
    return num;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string line;
    getline(cin, line);
    string currNum;
    while (line.length() > 0)
    {
        if (line[0] == '+')
        {
            cout << " tighten ";
            line = line.substr(1, string::npos);
            currNum = findInteger(line);
            cout << currNum << "\n";
            line = line.substr(currNum.length(), string::npos);
        }
        else if (line[0] == '-')
        {
            cout << " loosen ";
            line = line.substr(1, string::npos);
            currNum = findInteger(line);
            cout << currNum << "\n";
            line = line.substr(currNum.length(), string::npos);
        }
        else
        {
            cout << line[0];
            line = line.substr(1, string::npos);
        }
    }
    return 0;
}

