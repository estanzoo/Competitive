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
    vector<int>start;
    vector<int>end;
    vector<int>point;
    int n, q, curr, curr1, curr2;
    ll tot = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr >> curr1 >> curr2;
        start.push_back(curr);
        end.push_back(curr1);
        point.push_back(curr2);
        tot += curr2;
    }
    vector<int>failed;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> curr;
        failed.push_back(curr);
    }
    sort(failed.begin(), failed.end());
    for (int i = 0; i < n; i++)
    {       
        int a = lower_bound(failed.begin(), failed.end(), start[i]) - failed.begin();
        int b = lower_bound(failed.begin(), failed.end(), end[i]) - failed.begin();
        if (a != b || (a < failed.size()  && failed[a] == start[i]))
            tot -= point[i];
    }
    cout << tot << endl;
    return 0;
}

