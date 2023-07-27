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
    int n, cur;
    cin >> n;
    vector<int>arr;
    loop(n)
    {
        cin >> cur;
        arr.push_back(cur);
    }
    sort(arr.begin(), arr.end());
    loop(n)
    {
        cout << arr[i] << '\n';
    }
    return 0;
}

