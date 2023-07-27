// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, currBid, highestBid = -1;
    string currName, highestName;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> currName >> currBid;
        if (currBid > highestBid)
        {
            highestBid = currBid;
            highestName = currName;
        }
    }
    cout << highestName << "\n";
    return 0;
}

