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
    vector<vector<int>> a (26, vector<int>(0));
    string line;
    getline(cin, line);
    int curr = line[0];
    curr -= 97;
    //if wa check first char if space
    for (int i = 0; i < 26; i++)
    {
        if (i == curr)
            a[i].push_back(1);
        else
            a[i].push_back(0);
    }
    for (int i = 1; i < line.length(); i++)
    {
            curr = line[i] - 97;
            for (int i = 0; i < 26; i++)
            {
                if (i == curr)
                    a[i].push_back(1 + a[i][a[i].size()-1]);
                else
                    a[i].push_back(a[i][a[i].size() - 1]);
            
        }
    }
    int n, l, r;
    char q;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r >> q;
        l--;
        r--;
        int index = (int)q;
        index -= 97;
        int left = a[index][l];
        int right = a[index][r];
        int count = 0;
        if (line[l] == q)
            count++;
        cout << right - left + count;
        cout << "\n";
    }
    return 0;
}

