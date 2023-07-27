// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < (n / 2 + 1); i++)
    {
        if ((n - i) < i)
            break;
        else
        {
            if (n - i <= 5 && i <= 5)
                count++;
        }
    }
    cout << count;
    return 0;
}

