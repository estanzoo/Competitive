// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector <int> swifts, sema;
    int n, sumSW = 0, sumSema = 0, currNum, largestDay = 0;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        cin >> currNum;
        swifts.push_back(currNum);
    }
    for (int j = 0; j < n; j++)
    {
        cin >> currNum;
        sema.push_back(currNum);
    }
    for (int i = 0; i < n; i++)
    {
        sumSW += swifts[i];
        sumSema += sema[i];
        if (sumSema == sumSW)
            largestDay = i + 1;
    }
    cout << largestDay;
    return 0;
}

