// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    long long a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a - b != 1)
        {
            cout << "NO" << "\n";
        }
        else
        {
            bool prime = true;
            int root = sqrt(a + b);
            if ((a+b) < 2)
                prime = false;
            else if ((a + b) == 2)
                prime = true;
            else if ((a + b) % 2 == 0)
                prime = false;
            else
            {
                for (int i = 3; i <= root; i+=2)
                {
                    if ((a + b) % i == 0)
                    {
                        prime = false;
                        break;
                    }
                }
            }
            if (prime)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
    }
    return 0;
}

