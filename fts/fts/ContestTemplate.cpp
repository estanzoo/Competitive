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
    int n, counter = 0;
    string a;
    cin >> n >> a;
    for (int i = n; i >= 0; i--)
    {
        if ((counter % 2 == 0) && a[i] == '1')
        {
            counter++;
        }
        if ((counter % 2 == 1) && a[i] == '0')
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}

