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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    string a; cin >> a;

    if (a.find("mom") != string::npos) cout << "no";
    else if (a.find("mmm") != string::npos) cout << "no";
    else if (a.find("ooo") != string::npos) cout << "no";
    else {
        int tot = 0;
        int index = a.find('m');
        while (index != 0) {
            tot++;
            a = a.substr(1);
            index = a.find('m');
        }
        if (a[a.length() - 1] == 'm') tot++;
        int c = a.length();
        c--;
        tot += c / 3;
        if (tot > n) cout << "no";
        else cout << "yes";
    }

    return 0;
}

