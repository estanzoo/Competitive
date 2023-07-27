// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    ll currLow = 1, currHigh = 2000000000;
    for (int i = 0; i < 32; i++)
    {
        cout << (currLow + currHigh) / 2 << "\n" << flush;
        string response;
        cin >> response;
        if (response.compare("SINKS") == 0)
        {
            currLow = 1+((currHigh+currLow) / 2);
        }
        else if (response.compare("FLOATS") == 0)
        {
            currHigh = ((currHigh+currLow) / 2)-1;
        }
        else if (response.compare("OK") == 0)
        {
            break;
        }
    }
    return 0;
}

