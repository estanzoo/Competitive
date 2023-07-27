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
    int n, curr, curr1;
    int values[6] = { 0, 10, 30, 85, 170, INT_MAX };
    double multiplier[4] = { 0.2373, 0.2271, 0.2178, 0.2085 };
    double premade[4] = { 6.59, 11.336, 23.8265, 42.34 };
    while (true)
    {
        cin >> n;
        if (n < 0)
            break;
        else {
            cin >> curr >> curr1;
            cout << "Account #: " << n << "\n";
            cout << "Bill: ";
            int sum = curr1 - curr;
            if (sum < 0)
            {
                sum = (curr1 + 10000) - curr;
            }
            double ans;
            int range;

            if (sum <= 10)
            {
                cout << "6.59" << "\n";
            }
           else
            {
                for (int i = 4; i >= 0; i--)
                {
                    if (sum >= values[i] && sum < values[i + 1])
                    {
                        range = i;
                        sum -= values[i];
                        ans = premade[i-1];
                        break;
                    }
                }
                ans += multiplier[range - 1] * sum;
                cout << fixed << setprecision(2) << ans << "\n";
            }

        }
    }
    return 0;
}

