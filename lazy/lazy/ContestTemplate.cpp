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
    int n, q;
    cin >> n >> q;
    ll currSum = 0;
    for (int i = 0; i < q; i++)
    {
        int curr;
        cin >> curr;
        if (curr == 1)
        {
            int ind1, ind2;
            cin >> ind1 >> ind2;
            int length = abs(ind2 - ind1) + 1;
            cout << length * currSum << "\n";
        }
        else
        {
            int curr1;
            cin >> curr1;
            currSum += curr1;
        }
    }
    return 0;
}

