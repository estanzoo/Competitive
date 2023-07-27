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
    int n, m, a, p;
    double current = 1.0;
    cin >> n >> m;
    vector <double> x;
    loop(n) { x.push_back(0.0); }
    for (int i = 0; i < m; i++)
    {
        cin >> a >> p;
        a--;
        double cut = current / 100.0 * p;
        x[a] += cut;
        current -= cut;
    }
    for (int i = 0; i < n; i++) cout << fixed << setprecision(6) << x[i] << "\n";
    return 0;
}

