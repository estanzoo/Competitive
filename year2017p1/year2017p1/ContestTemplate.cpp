// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int name;
    char op;
    deque <int> list;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> op >> name;
        if (op == 'E') {
            list.push_back(name);
        }
        else if (op == 'F'){
            list.push_front(name);
        }
        else
        {
            int index = find(list.begin(), list.end(), name) - list.begin();
            list.erase(list.begin() + index);
        }
    }
    for (int i = 0; i < list.size(); i++)
    {
            cout << list[i] << "\n";
    }
    return 0;
}

