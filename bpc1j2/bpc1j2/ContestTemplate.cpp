// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

int gcdN(vector<int> arr, int i)
{
    if (i == arr.size() - 1) {
        return arr[i];
    }
    int a = arr[i];
    int b = gcdN(arr, i + 1);
    return gcd(a, b);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, current;
    cin >> n;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> current;
        arr.push_back(current);
    }
    int g = gcdN(arr, 0);
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
            cout << arr[i] / g << " ";
        else
            cout << arr[i] / g << "\n";
    }
    return 0;
}

