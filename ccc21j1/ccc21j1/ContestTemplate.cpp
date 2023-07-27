// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, temp;
    cin >> n;
    temp = n * 5 - 400;
    cout << temp << "\n";
    if (temp < 100)
        cout << "1";
    else if (temp == 100)
        cout << "0";
    else
        cout << "-1";
    cout << "\n";
    return 0;
}

