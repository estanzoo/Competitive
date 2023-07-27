// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, num;
    long long tot = 0;
    cin >> n >> num;
    for (int i = 0; i < n; i++)
    {
        long long curr, curr1; 
        cin >> curr >> curr1;
        tot += (curr * curr1);
    }
    cout << tot % num;
    return 0;
}

