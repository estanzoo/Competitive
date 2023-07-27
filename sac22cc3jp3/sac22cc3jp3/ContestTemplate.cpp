// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    char curr;
    double tot = 1.0;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        if (curr == 'B')
            tot *= 0.8;
        else if (curr == 'C')
            tot *= 0.6;
        else if (curr == 'D')
            tot *= 0.4;
        else if (curr == 'E')
            tot *= 0.2;
    }
    cout << tot;
    return 0;
}

