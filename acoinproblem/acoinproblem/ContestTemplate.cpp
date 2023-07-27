// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector <int> vals;
bool mem[10003];
bool done[10003];

bool dp(int a)
{
    if (a == 0)
        return true;
    if (a < 0) return false;
    if (done[a]) return mem[a];
    done[a] = true;
    for (int b : vals){
        if (dp(a - b)) {
            mem[a] = true; 
            return true; 
        }
    }
    mem[a] = false;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;
        vals.push_back(curr);
    }
    mem[0] = true;
    if (dp(s))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

