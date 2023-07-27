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
    int month, day;
    cin >> month >> day;
    if (month < 2) cout << "Before";
    else if (month > 2) cout << "After";
    else if (day < 18) cout << "Before";
    else if (day > 18) cout << "After";
    else cout << "Special";
    return 0;
}

