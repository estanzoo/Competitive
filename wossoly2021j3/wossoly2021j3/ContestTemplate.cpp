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
    int disk [7] = {1000,500,100,50,10,5,1};
    ll n;
    cin >> n;
    ll amt[7] = { 0, 0, 0, 0, 0, 0, 0 };
    for (int i = 0; i < 7; i++)
    {
        if (n / disk[i] >= 1)
        {
            amt[i] += n / disk[i];
            n -= disk[i] * amt[i];
        }
    }
    for (int i = 6; i >= 0; i--)
    {
        if (i > 0)
            cout << amt[i] << " ";
        else
            cout << amt[i];
    }
    return 0;
}

