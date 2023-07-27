// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e6 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++) {
        int num = a[i];
        int s = n + (i+1)*3;
        num -= s;
        if (num < 65) num += 26;
        cout << (char)num;
    }
    cout << endl;
    return 0;
}

