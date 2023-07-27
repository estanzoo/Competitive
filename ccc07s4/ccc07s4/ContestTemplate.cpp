// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

string removeSpace(string a)
{
    string newStr = "";
    for (char ab : a)
    {
        if (ab != ' ')
            newStr += ab;
    }
    return newStr;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a, b, newA, newB;
    getline(cin, a);
    getline(cin, b);
    newA = removeSpace(a);
    newB = removeSpace(b);
    sort(newA.begin(), newA.end());
    sort(newB.begin(), newB.end());
    if (newA.compare(newB) == 0)
        cout << "Is an anagram.";
    else
        cout << "Is not an anagram.";


    return 0;
}

