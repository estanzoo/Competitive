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
    string in, target;
    int count = 0;
    getline(cin, in);
    getline(cin, target);
    while (true)
    {
        if (in.find(target) != string::npos)
            break;
        string newO = "";
        for (int i = 0; i < in.size(); i++)
        {
            char curr = in[i] - 1;
            if (curr == 96)
                curr = 122;
            newO += curr;
        }
        count++;
        in = newO;

    }
    cout << count << "\n" << in;
    return 0;
}

