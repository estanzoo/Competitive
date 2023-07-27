// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n1, n2, n3, diff;
    cin >> n1 >> n2 >> n3;
    diff = n2 - n1;
    cout << n3 + diff <<"\n" << n3 + 2 * diff << "\n" << n3+3*diff;
    return 0;
}

