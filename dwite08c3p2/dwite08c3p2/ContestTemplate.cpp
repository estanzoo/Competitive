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
    for (int i = 0; i < 5; i++)
    {
        string line;
        int currChar = 0, counter = 0;
        getline(cin, line);
        for (int j = 0; j < line.length(); j++)
        {
            char curr = line[j];
            if ((curr >= 65 && curr <= 90) || (curr >= 97 && curr <= 122))
            {
                currChar++;
            }
            else 
            {
                if (currChar >= 4)
                {
                    counter++;
                }
                currChar = 0;
            }
        }
        if (currChar >= 4)
        {
            counter++;
        }
        cout << counter << "\n";
    }
    return 0;
}

