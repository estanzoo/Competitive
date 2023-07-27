// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(int n) {

    if (n == 2) {
        return true;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int* primacity = new int[10000001];
    for (int i = 0; i < 10000001; i++)
        primacity[i] = 0;
    for (int i = 2; i < 10000001; i++)
    {
        if (isPrime(i))
        {
            for (int j = 1; j <= 10000001/i; j++)
            {
                primacity[i * j]++;
            }
        }
    }
    int t, a, b, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int count = 0;
        cin >> a >> b >> k;
        for (int j = a; j <= b; j++)
        {
            if (primacity[j] == k)
                count++;
        }
        cout << "Case #" << i + 1 << ": " << count << "\n";
    }

    return 0;
}

