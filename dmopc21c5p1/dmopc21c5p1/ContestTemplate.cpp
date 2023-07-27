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
    int n;
    cin >> n;
    if (n == 1) cout << 1 << "\n";
    else if (n == 2) cout << -1 << "\n";
    else if (n == 3) cout << -1<< "\n";
    else if (n == 4) cout << -1 << "\n";
    else
    {
        for (int i = 1; i <= n; i += 2) {
            if (i != 5) cout << i << " ";
        }
        cout << 5 << " " << 4;
        for (int i = 2; i <= n; i += 2)
        {
            if (i != 4) cout << " " << i;
        }
        cout << "\n";
    }
    return 0;
}

