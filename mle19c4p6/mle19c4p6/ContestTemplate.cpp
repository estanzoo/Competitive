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
    int n;
    string l1, l2;
    cin >> n;
    cin.ignore(256, '\n');
    getline(cin, l1);
    getline(cin, l2);
    int h1, h2, m1, m2;
    int index = l1.find(':'), index2 = l2.find(':');
    h1 = stoi(l1.substr(0, index), 0);
    h2 = stoi(l2.substr(0, index2), 0);
    m1 = stoi(l1.substr(index+1, 2), 0);
    m2 = stoi(l2.substr(index2+1, 2), 0);
    int t1, t2;
    t1 = h1 * 60 + m1;
    t2 = h2 * 60 + m2;
    cout << fixed << setprecision(3) << ((t2 - t1)*1.0 / n)*60.0;
    return 0;
}

