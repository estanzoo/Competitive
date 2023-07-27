// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

/*
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q, curr; string a;
    cin >> n >> q;
    vector<pair<string, int>> cards;
    vector<set<string>> ans;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> curr;
        cards.push_back(make_pair(a, curr));
    }
    for (int i = 0; i < n - 3; i++)
    {
        int curr = cards[i].second;
        for (int j = i + 1; j < n - 1; j++)
        {
            curr += cards[j].second;
            for (int k = j + 1; k < n; k++)
            {
                if (curr + cards[k].second <= q)
                {
                    set <string> currDeck;
                    currDeck.insert(cards[i].first);
                    currDeck.insert(cards[j].first);
                    currDeck.insert(cards[k].first);
                    ans.push_back(currDeck);
                }
            }
            curr -= cards[j].second;
        }
    }
    set <string> finalAns;
    for (int i = 0; i < ans.size(); i++)
    {
        set<string> d = ans[i];
        string currAns = "";
        for (string a : d)
        {
            currAns += a + " ";
        }
        currAns = currAns.substr(0, currAns.length() - 1);
        finalAns.insert(currAns);
    }
    for (auto a : finalAns) {
        cout << a << "\n";
    }
    return 0;
}
*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q, curr; string a;
    cin >> n >> q;
    vector<pair<string, int>> cards;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> curr;
        cards.push_back(make_pair(a, curr));
    }
    sort(cards.begin(), cards.end(), [](auto  lhs, auto  rhs) {
        return lhs.first < rhs.first;
        });
    vector<string> ans;
    for (int i = 0; i <= n - 3; i++)
    {
        int curr = cards[i].second;
        for (int j = i + 1; j < n - 1; j++)
        {
            curr += cards[j].second;
            for (int k = j + 1; k < n; k++)
            {
                if (curr + cards[k].second <= q)
                {
                    string currDeck;
                    currDeck += cards[i].first + " "  + cards[j].first + " " + cards[k].first;
                    ans.push_back(currDeck);
                }
            }
            curr -= cards[j].second;
        }
    }
    for (auto a : ans) {
        cout << a << "\n";
    }
    return 0;
}