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
    int n, curr, prev = -1, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        if (curr == prev)
            count++;
        prev = curr;
    }
    cout << count;
    return 0;
}

