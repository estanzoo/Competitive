// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long counter = 0, curr;
    vector <long long> snowball;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        snowball.push_back(curr);
    }
    for (int i = 1; i < n; i++)
    {
        long long diff;
        if (snowball[i] < snowball[i- 1])
        {
            diff = snowball[i - 1] - snowball[i];
            counter += diff;
            snowball[i] += diff;
        }
    }
    cout << counter << "\n";
}

