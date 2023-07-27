// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

bool isPrime(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        a *= 2;
        for (int j = 2; j <= a/2; j++)
        {
            if (isPrime(j) && isPrime(a - j)) {
                cout << j << " " << a - j << "\n"; 
                break;
            }
        }
    }
    return 0;
}

