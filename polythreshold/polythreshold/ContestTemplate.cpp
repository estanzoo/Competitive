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

double a, b, c, h, cor = 0.0001, lo = 1, hi = 1e10;
double getAns(double ans) {
    return a * pow(ans, 3) + b * pow(ans, 2) + c * ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c >> h;
    while (true) {
        double ans = (lo + hi) / 2.0;
        double currAns = getAns(ans);
        if (hi - lo <= cor) {
            cout << setprecision(10) << fixed << ans; return 0;
        }
        if (h > currAns) lo = ans;
        else hi = ans;
    }
    return 0;
}
