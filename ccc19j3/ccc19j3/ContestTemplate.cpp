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
    int n;
    cin >> n;
    cin.ignore(256, '\n');
    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin, line);
        char curr;
        curr = line[0];  
        int counter = 1;
        for (int j = 1; j < line.length(); j++)
        {
            if (line[j] != curr)
            {
                cout << counter << " " << curr << " ";
                counter = 0;
                curr = line[j];
            }
            if (j == line.length() - 1)
                cout << counter + 1 << " " << curr;
            else
                counter++;
        }
        cout << "\n";
    }
    return 0;
}

