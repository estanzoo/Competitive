// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

string reverseString(string a)
{
    string ans = "";
    for (int i = 0; i < a.length(); i++)
    {
        ans = a[i] + ans;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, max = -1;
    string a;
    cin >> n >> a;
    int counter = 0;
    while (counter <= n)
    {
        if (a[0] != 'g')
        {
            char c = a[0];
            a = a.substr(1);
            a += c;
            counter++;
        }
        else
        {
            
                if (a.find("s") == string::npos) { max = n; break; }
                int firstS = a.find("s");
                string back = reverseString(a);
                int firstG = back.find("g");
                if (firstS + firstG > max) max = firstS + firstG;
            
            char c = a[0];
            a = a.substr(1);
            a += c;
            counter++;
        }
    }
    cout << max;
    return 0;
}

