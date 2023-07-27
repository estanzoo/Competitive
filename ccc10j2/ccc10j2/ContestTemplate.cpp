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
    int a, b, c, d, s;
    cin >> a >> b >> c >> d >> s;
    int counterB = 0, counterN = 0;
    bool forB = true, forN = true;
    int stepsB = 0, stepsN = 0;
    for (int i = 0; i < s; i++)
    {
        if (counterN == a && forN) {
            forN = false;
            counterN = 0;
        }
        if (counterN == b && !forN) {
            forN = true;
            counterN = 0;
        }
        if (forN)
            stepsN++;
        else
            stepsN--;
        counterN++;
        if (counterB == c && forB) {
            forB = false;
            counterB = 0;
        }
        if (counterB == d && !forB) {
            forB = true;
            counterB = 0;
        }
        if (forB)
            stepsB++;
        else
            stepsB--;
        counterB++;
    }
    if (stepsN > stepsB)
        cout << "Nikky";
    else if (stepsN < stepsB)
        cout << "Byron";
    else
        cout << "Tied";
    return 0;
}

