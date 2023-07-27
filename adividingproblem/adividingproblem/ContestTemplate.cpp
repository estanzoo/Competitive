// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(vector <int> arr, int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}

int main()
{
    int n, min = 10000000001, curr, largest = 1;
    vector <int> num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        num.push_back(curr);
    }
    cout << findGCD(num, n);
    return 0;
}