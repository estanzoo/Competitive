// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, words = 0, speed, currTea;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        speed = 18;
        currTea = 0;
        if (m-k >= 0)
        {
            currTea = k;
            m -= k;
        }
        else 
        {
            currTea = m;
            m = 0;
        }
        for (int j = 0; j < currTea; j++)
        {
            speed += j + 1;
        }
        words += speed * 60;
    }
    cout << words;
    return 0;
}

