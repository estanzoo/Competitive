// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//A = 65, Z = 90, a = 97, z = 122
#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, curr;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        nums.push_back(curr);
    }
    int currPos = 0;
    while (true)
    {
        
        currPos += nums[currPos];
        if (nums[currPos] == 0)
            break;
        cout << (char)(nums[currPos] + 64);
        currPos++;
        
    }
    return 0;
}

