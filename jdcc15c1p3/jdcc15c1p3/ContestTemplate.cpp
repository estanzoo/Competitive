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
    int n, q;
    double curr, tot;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ans = 0;
        tot = 0;
        vector <double> marks;
        cin >> q;
        for (int j = 0; j < q; j++)
        {
            cin >> curr;
            marks.push_back(curr);
            tot += curr;
        }
        double c = tot/q - 50.0;
        for (int j = 0; j < q; j++)
        {
            if (marks[j] - c >= 50)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}

