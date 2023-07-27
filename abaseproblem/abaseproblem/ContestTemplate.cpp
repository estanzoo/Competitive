// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


string baseConv(int base, ll a)
{
    string ans = "";
    while (a != 0)
    {
        ans += to_string(a % base);
        a /= base;
    }
    string out = "";
    for (int j = ans.length() - 1; j >= 0; j--)
    {
        out += ans[j];
    }
    return out;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int b;
    string x, y;
    cin >> b >> x >> y;
    ll first = stoi(x, nullptr, b);
    ll second = stoi(y, nullptr, b);
    ll sum = first + second;
    ll product = first * second;
    cout << baseConv(b, sum) << "\n" << baseConv(b, product);
    return 0;
}


