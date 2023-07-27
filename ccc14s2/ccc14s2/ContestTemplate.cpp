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
    int n;
    bool good = true;
    string q;
    vector<string>first, second;
    cin >> n;
    loop(n)
    {
        cin >> q;
        first.push_back(q);
    }
    loop(n)
    {
        cin >> q;
        second.push_back(q);
    }
    for (int i = 0; i < n; i++)
    {
        string partner = second[i];
        int index = find(first.begin(), first.end(), partner) - first.begin();
        if (second[index].compare(first[i]) != 0 || second[index].compare(first[index]) == 0) {
            good = false;
            break;
        }
        partner = first[i];
        index = find(second.begin(), second.end(), partner) - second.begin();
        if (first[index].compare(second[i]) != 0 || second[index].compare(first[index]) == 0) {
            good = false;
            break;
        }
    }
    if (good) cout << "good";
    else cout << "bad";
    return 0;
}

