// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string curr;
    int first, second, sum, lastSum;

    while (true)
    {
        cin >> curr;
        if (curr.compare("99999") == 0)
            break;
        else
        {

            first = curr[0] - '0';
            second = curr[1] - '0';
            sum = (first + second);
            if (sum == 0)
            {
                sum = lastSum;
            }
            if (sum % 2 == 1)
            {
                cout << "left ";
                lastSum = 1;
            }
            else 
            {
                cout << "right ";
                lastSum = 2;
            }
            cout << curr.substr(2, string::npos) << "\n";
        }
    }
    return 0;
}

