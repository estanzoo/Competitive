// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

bool isPrime(int x)
{
    if (x == 1) return false;
    if (x == 2) return true;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int counter;
    cin >> counter;
    while (true)
    {
        if (isPrime(counter))
        {
            cout << counter << "\n";  
            break;
        }
        else {
            counter++;
        }
    }
    return 0;
}

