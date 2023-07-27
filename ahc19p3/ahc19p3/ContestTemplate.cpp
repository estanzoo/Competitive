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
    int n, curr;
    ll sum = 0;
    vector <int> arr;
    vector <int> ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        arr.push_back(curr);
        sum += abs(curr);
    }
    int sign = 1;
    for (int i = n-1; i >= 0; i--)
    {
        if (arr[i] * sign < 0) {
            ans.push_back(i + 1);
            sign *= -1;
        }
    }
    cout << sum << "\n"; 
    for (int i = ans.size()-1; i >=0; i--)
    {
        cout << ans[i] << " ";
    }
    return 0;
}

