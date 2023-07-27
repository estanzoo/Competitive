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
    int n, q, c, a = 0, sum = 0;
    cin >> n >> q;
    vector <int> og;
    for (int i = 0; i < q; i++)
    {
        cin >> c;
        og.push_back(c);
    }

    sort(og.begin(), og.end(), [](const int& lhs, const int& rhs) {
        return abs(lhs) < abs(rhs);
        });

    sum += abs(og[a]);
    a++;
    if (sum > n)
        cout << 0;
    else
    {
        while (true)
        {
            sum += abs(og[a-1] - og[a]);
            if (sum > n)
                break;
            a++;
            if (a == og.size())
                break;
        }
        cout << a;
    }
    return 0;
}

