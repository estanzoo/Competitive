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
    ll sum = 0;
    cin >> n;
    vector <int> arr;
    for (int i = 0; i < n*2; i++)
    {
        cin >> cur;
        arr.push_back(cur);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n*2; i+=2)
    {
        sum += arr[i + 1] - arr[i];
    }
    cout << sum << "\n";
    return 0;
}

