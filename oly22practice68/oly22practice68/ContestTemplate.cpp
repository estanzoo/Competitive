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
    int a;
    cin >> a;
    int allSame = 0;
    int starting = a / 1000;
    for (int i = 0; i <= 3; i++) {
        allSame += pow((10), i) * starting;
    }
    int increase = starting;
    for (int i = 1; i <= 3; i++)
    {
        int current = increase % 10;
        current++;
        if (current == 10) current = 0;
        increase *= 10;
        increase += current;
    }
    int decrease = starting;
    for (int i = 1; i <= 3; i++)
    {
        int current = decrease % 10;
        current--;
        if (current == -1) current = 9;
        decrease *= 10;
        decrease += current;
    }
    if (a == allSame || a == increase || a == decrease) cout << "weak\n";
    else cout << "strong\n";
    return 0;
}

