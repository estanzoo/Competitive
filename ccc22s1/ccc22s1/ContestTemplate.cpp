// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, counter = 0;
    cin >> n;
    int num = n / 5;
    for (int i = 0; i <= num; i++)
    {
        if ((n-i*5) %4  == 0)
            counter++;
    }
    cout << counter << "\n";
    return 0;
}

