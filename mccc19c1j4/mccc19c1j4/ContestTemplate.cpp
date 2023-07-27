// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, min = 1000001, curr;
    vector <int> num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        num.push_back(curr);
        if (curr < min)
            min = curr;
    }
    for (int i = 1; i <= min; i++)
    {
        bool divisible = true;
        for (int j = 0; j < n; j++)
        {
            if (num[j] % i != 0)
            {
                divisible = false;
                break;
            }
        }
        if (divisible == true)
            cout << i << "\n";
    }
    return 0;
}

