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
    vector<int> pas;
    int n;
    cin >> n;
    if (n == 1)
        cout << 1 << "\n";
    else
    {
        pas.push_back(1);
        cout << 1 << "\n";
        for (int i = 1; i < n; i++)
        {
            vector <int> newPas;
            for (int j = 0; j < pas.size() - 1; j++)
            {
                newPas.push_back(pas[j] + pas[j+1]);
            }
            newPas.push_back(1);
            newPas.insert(newPas.begin(), 1);
            pas = newPas;
            for (int j = 0; j < pas.size(); j++)
            {
                if (j == pas.size() - 1)
                    cout << pas[j] << "\n";
                else
                    cout << pas[j] << " ";
            }
        }
    }
    return 0;
}

