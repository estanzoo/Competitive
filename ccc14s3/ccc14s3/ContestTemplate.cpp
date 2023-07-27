// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n;
    for (int x = 0; x < n; x++)
    {
        cin >> q; 
        stack <int> nums;
        bool yes = true;
        for (int i = 0; i < q; i++)
        {
            int curr;
            cin >> curr;
            nums.push(curr);
        }
        stack <int> branch;
        int latest = 0;
        while (nums.size() > 0)
        {
            if (nums.top() == latest + 1)
            {
                latest = nums.top();
                nums.pop();
            }
            else if (branch.size() != 0 && branch.top() == latest + 1)
            {
                latest = branch.top();
                branch.pop();
            }
            else
            {
                branch.push(nums.top());
                nums.pop();
            }
        }
        for (int i = 0; i < branch.size(); i++)
        {
            if (branch.top() == latest + 1)
            {
                latest = branch.top();
            }
            else {
                yes = false;
                break;
            }
            branch.pop();
        }
        if (yes)
            cout << "Y" << "\n";
        else
            cout << "N" << "\n";            
    }
    return 0;
}

