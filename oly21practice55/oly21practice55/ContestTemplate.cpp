// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)


//a = 97, z = 122
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string n, curr = "";
    int counter = 97;
    bool found = false;;
    cin >> n;
    for (int i = 0;;i++)
    {
        for (int j = 97; j <= 122; j++)
        {
            curr = "";
            for (int k = 0; k <= i; k++)
            {
                curr += (char)j;
            }
            for (int k = 97; k <= 122; k++)
            {
                curr = curr.substr(0, curr.length() - 1);
                curr += (char)k;
                if (n.find(curr) == string::npos)
                {
                    cout << curr << "\n";
                    found = true;
                    break;
                }
            }
            if (found)
                break; 
        }
        if (found)
            break;
    }
    return 0;
}
