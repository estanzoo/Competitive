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
    int n, curr, sum = 0;
    stack<int> a;
    cin >> n;
    loop(n)
    {
        cin >> curr;
        if (curr == 0) {
            sum -= a.top();
            a.pop();            
        }
        else {
            a.push(curr);
            sum += curr;
        }
    }
    cout << sum;
    return 0;
}

