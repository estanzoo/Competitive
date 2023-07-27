// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    unordered_set <int> phone;
    vector <int> answers;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;
        if (phone.find(curr) == phone.end())
        {
            phone.emplace(curr);
            answers.push_back(i + 1);
        }
    }
    cout << answers[0];
    for (int i = 1; i < answers.size(); i++)
        cout << " " << answers[i];
    return 0;
}

