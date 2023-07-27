// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set <int> mid;
    unordered_set <int> fin;
    bool y = true;
    int mid1, mid2, mid3, fin1, fin2, fin3, midN, finN;
    cin >> mid1;
    cin >> mid2;
    cin >> mid3;
    cin >> fin1;
    cin >> fin2;
    cin >> fin3; 
    cin >> midN>> finN;
    if ((mid1 == midN || mid2 == midN || mid3==midN) && (fin1 == finN || fin2 == finN || fin3 == finN))
        cout << "Probably Trustworthy";
    else
        cout << "F For Honesty";
    return 0;
}

