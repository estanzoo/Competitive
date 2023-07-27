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
    int n, curr ;
    int countN = 0;
    int maxN = -1;
    vector<int> sums;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> curr;
        sums.push_back(curr);
        maxN = max(maxN, curr);
    }
    for (int i = 1; i < maxN; i++)
    {
        bool broken = false;
        int start = i;
        for (int a : sums)
        {
            start = a - start;
            if (start <= 0)
            {
                broken = true;
                break;
            }
        }
        if (!broken)
            countN++;
    }
    cout << countN;
    return 0;
}

