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
    int n, c;
    vector <int> unsorted;
    vector <int> sorted;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        unsorted.push_back(c); sorted.push_back(c);
    }
    sort(sorted.begin(), sorted.end());
    cout << (find(unsorted.begin(), unsorted.end(), sorted[n - 2]) - unsorted.begin())+1;
    return 0;
}

