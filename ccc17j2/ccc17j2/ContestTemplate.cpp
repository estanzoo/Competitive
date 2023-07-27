// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, k, sum;
    cin >> num >> k;
    sum = num;
    for (int i = 0; i < k; i++)
    {
        num *= 10;
        sum += num;
    }
    cout << sum << "\n";
    return 0;
}

