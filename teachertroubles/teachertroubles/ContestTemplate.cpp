// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

string alph = "abcdefghijklmnopqrstuvwxyz";

vector <string> getNames(string mail)
{
    string ans = "";
    vector <string> ansV;
    for (int i = 0; i < mail.length(); i++) {
        if (mail[i] == '.') {
            ansV.push_back(ans);
        }
        else if (find(alph.begin(), alph.end(), mail[i]) == alph.end()) {
            ansV.push_back(ans);
            break;
        };
        ans += mail[i];
    }
    return ansV;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //unordered_set<string> first;
    //unordered_set<string>both;
    int n, ans = 0;
    string curr;
    cin >> n;
    vector<string> first;
    vector<string> second;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        vector <string> currV = getNames(curr);
        bool inFirst = false;
        for (string ab : first) {
            if (ab.compare(currV[0])==0) {
                inFirst = true;
                break;
            }
        }
        if (inFirst) ans = 1;
        else first.push_back(currV[0]);
        bool inSecond = false;
        for (string ab : second) {
            if (ab.compare(currV[1])==0) {
                inSecond = true;
                break;
            }
        }
        if (inSecond) ans = 2;
        else second.push_back(currV[1]);

        if (ans == 2) {
            cout << "BIG HEADACHE";
            return 0;
        }
    }
    if (ans == 1) cout << "HEADACHE";
    else cout << "NO HEADACHE";
    return 0;
}

