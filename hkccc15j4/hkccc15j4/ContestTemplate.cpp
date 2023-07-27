// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q, l, r;
    cin >> n;
    vector <bool> occupied;
    loop(n)
    {
        occupied.push_back(false);
    }
    cin >> q;
    loop(q)
    {
        cin >> l >> r;
        for (int j = l; j < r; j++) occupied[j] = true;        
    }
    int length = 0, maxLength = 0;
    if (!occupied[0])
        length++;
    for (int i = 1; i < n; i++)
    {
        if (!occupied[i] && !occupied[i - 1]) {
            length++;
            if (length > maxLength)
                maxLength = length;

        }          
        else if (!occupied[i-1])
        {
            length = 0;
        }
        else
        {
            length = 1;
        }
    }
    cout << maxLength;
    return 0;
}

