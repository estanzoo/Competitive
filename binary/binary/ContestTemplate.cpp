// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, curr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        if (curr == 0)
            cout << "0000" << '\n';
        else
        {
            string ans = "";
            while (curr != 0)
            {
                ans += to_string(curr % 2);
                curr /= 2;
            }
            string out = "";
            while (ans.length() % 4 != 0)
            {
                ans += "0";
            }
            for (int j = ans.length() - 1; j >= 0; j--)
            {
                out += ans[j];
            }
            int counter = 0;
            for (int j = 0; j < out.length(); j++)
            {
                if (counter == 4)
                {
                    counter = 0;
                    cout << " ";
                }
                cout << out[j];
                counter++;
            }
            cout << "\n";
        }
    }
    return 0;
}

