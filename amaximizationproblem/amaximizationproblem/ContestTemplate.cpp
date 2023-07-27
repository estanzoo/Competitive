// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, num1, num2, num3;
    cin >> n;
    num1 = n / 3.0;
    num2 = ceil(n/3.0);
    num3 = n - (num1 + num2);
    cout << num1 *num2*num3  + num1*num2 + num2*num3 + num1*num3;
}

