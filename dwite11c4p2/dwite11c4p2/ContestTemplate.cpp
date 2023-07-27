// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ll long long
#define loop(x) for (int u = 0; u < x; u++)

unordered_map<int, int> prime(int n)
{
    unordered_map<int, int> ans;
    while (n % 2 == 0)
    {
        if (ans.find(2) != ans.end()) {
            int c = ans.at(2);
            ans.erase(2);
            ans.emplace(2, c + 1);
        }
        else ans.emplace(2, 1);
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            if (ans.find(i) != ans.end()) {
                int c = ans.at(i);
                ans.erase(i);
                ans.emplace(i, c + 1);
            }
            else ans.emplace(i, 1);
            n = n / i;
        }
    }
    if (n > 2) ans.emplace(n, 1);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, largest = 0;
    vector<int> a;
    set<int> sorted;
    map<int, int> answer[5];
    map<int, int> soFar;
    loop(5){
        cin >> n;
        if (n > largest) largest = n;
        a.push_back(n);
        sorted.emplace(n);
    }
    for (int i = 2; i <= largest; i++)
    {
        unordered_map<int, int> curr = prime(i);
        for (auto& x : curr)
        {
            if (soFar.find(x.first) == soFar.end())
            {
                soFar.emplace(x.first, x.second);
            }
            else {
                int c = soFar.at(x.first);
                soFar.erase(x.first);
                soFar.emplace(x.first, c + x.second);
            }
        }
        if (sorted.find(i) != sorted.end())
        {
            answer[find(a.begin(), a.end(), i) - a.begin()] = soFar;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        string ans = "";
        for (auto x : answer[i])
        {
            ans += to_string(x.first) + '^' + to_string(x.second) + " * ";
        }
        ans = ans.substr(0, ans.length() - 3);

        cout << ans << "\n";
    }
    return 0;
}

