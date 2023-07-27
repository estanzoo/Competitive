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
    int n, curr;
    for (int x = 0; x < 10; x++){
        int ans = 0;
        cin >> n;
        vector <int> a;
        for (int i = 0; i < n; i++){
            cin >> curr; a.push_back(curr);
        }
        for (int i = n - 1; i >= 1; i--)
        {
            int index = find(a.begin(), a.end(), i) - a.begin();
            int indexa = find(a.begin(), a.end(), i+1) - a.begin();
            if (index > indexa)
            {
                a.erase(a.begin() + index);
                a.insert(a.begin(), i);
                ans += index;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

