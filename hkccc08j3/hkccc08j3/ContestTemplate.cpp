// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

string compare(string a, string b)
{
    for (int i = 0; i < 8; i++)
    {
        if (a[i] < b[i])
            return a;
        else if (a[i] > b[i])
            return b;
            
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string currName, currNum;
    cin >> n;
    unordered_map<string, string> book;
    for (int i = 0; i < n; i++)
    {
        cin >> currName >> currNum;
        book.emplace(currNum, currName);
    }
    int q;
    cin >> q;
    int largest = -1;
    string largestNum;
    unordered_map<string, int> freq;
    for (int i = 0; i < q; i++)
    {
        cin >> currNum;
        if (freq.find(currNum) == freq.end())
            freq.emplace(currNum, 1);
        else
        {
            int curr = freq.at(currNum);
            freq.erase(currNum);
            freq.emplace(currNum, curr + 1);
        }
        if (freq.at(currNum) > largest)
        {
            largestNum = currNum;
            largest = freq.at(currNum);
        }
        else if (freq.at(currNum) == largest)
        largestNum = compare(currNum, largestNum);
    }  
    cout << book.at(largestNum);
    return 0;
}

