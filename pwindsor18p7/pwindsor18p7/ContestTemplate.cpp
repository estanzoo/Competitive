// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(n) for (int i = 0; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string curr;
    vector <string> arr;
    cin >> n;
    loop(n)
    {
        cin >> curr;
        arr.push_back(curr);
    }
    sort(arr.begin(), arr.end(), [](const string& lhs, const string& rhs) {
        return (lhs + rhs > rhs + lhs);
        });
    loop(n)
    {
        cout << arr[i];
    }
    return 0;
}

