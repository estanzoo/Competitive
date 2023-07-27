// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, currInt;

    string curr;
    vector <string> words;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        words.push_back(curr);
    }
    sort(words.begin(), words.end(), [](const string& lhs, const string& rhs) {
        if (lhs.length() != rhs.length())
            return lhs.length() < rhs.length();
        else
            return lhs < rhs;
        });
    vector <string> answers;
    for (int i = 0; i < m; i++)
    {
        cin >> currInt;
        answers.push_back(words[currInt - 1]);
    }
    for (int i = 0; i < m; i++)
        cout << answers[i] << "\n";
}

