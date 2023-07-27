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
    vector <char> polys;
    for (int i = 0; i < n; i++)
    {
        polys.push_back('r');
    }
    string currOp, currP;
    int currIn;
    for (int i = 0; i < q; i++)
    {
        cin >> currOp >> currP >> currIn;
        if (currOp[0] == 'g')
        {
            if (polys[currIn - 1] == currP[0])
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (currOp[0] == 's')
        {
            polys[currIn - 1] = currP[0];
        }
    }
    return 0;
}

