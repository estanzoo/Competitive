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
    int one, two, three, four;
    cin >> one >> two >> three >> four;
    bool yes = true;
    if ((one == 9 || one == 8) &&
     (four == 9 || four == 8) &&
    (two == three))
        yes = false;

    if (yes)
        cout << "answer";
    else
        cout << "ignore";
        return 0;
}

