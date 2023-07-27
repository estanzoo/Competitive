// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int reversals = 0, n;
    string line;
    cin >> n >> line;
    vector <int> cows;
    for (int i = 0; i < n; i+=2)
    {
        if (line[i] == 'H' && line[i + 1] == 'G') cows.push_back(0);
        if (line[i] == 'G' && line[i + 1] == 'H') cows.push_back(1);
    }
    for (int i = cows.size() - 1; i >= 0; i--)
    {
        if ((reversals % 2 == 0) && cows[i] == 1)
        {
            reversals++;
        }
        if ((reversals % 2 == 1) && cows[i] == 0)
        {
            reversals++;
        }
    }
    cout << reversals << endl;
    return 0;
}

