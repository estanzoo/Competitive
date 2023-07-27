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
    int n, curr, ans = 0; cin >> n;
    vector<int> flowers, psa;
    psa.push_back(0);
    for (int i = 0; i< n; i++) {
        cin >> curr;
        flowers.push_back(curr);
        int a = psa.size();
        int yes = psa[a - 1];
        psa.push_back(yes + curr);
    }
    ans = n;
    for (int i = 1; i < n; i++)
    {
        for (int j = i+1; j <= n ;j++)
        {
            int sum = psa[j] - psa[i-1];
            int num = j - i+1;
            double petals = (sum * 1.0) / num;
            for (int x = i-1; x < j; x++) {
                if (flowers[x] == petals) {
                    ans++;
                    break;
                }
            }
        }
    }
    cout << ans;
    return 0;
}

