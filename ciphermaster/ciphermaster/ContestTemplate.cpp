// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e6 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int n; 
string note;
unordered_map<int, vector<ll>> words;
ll hashing(string s)
{
    ll ans = 0;
    ll p = 1;
    ll m = 1000000007;
    for (int i = 0; i < s.size(); i++){
        ans += (s[i] - 'a') * p;
        ans = ans % m;
        p *= 31;
        p %= m;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    
    cin >> n >> note;
    
    for (int i = 0; i < n; i++) {
        string a; cin >> a;
        ll hash = hashing(a);
        if (words.find(a.size()) != words.end()) {
            vector<ll> c = words.at(a.size());
            c.push_back(hash);
            words.emplace(a.size(), c);
        }
        else {
            vector<ll> c; c.push_back(hash);
            words.emplace(a.size(), c);
        }
    }
    string alph = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < note.size(); j++) {
            note[j] = alph[alph.find(note[j]) + 1];
        }
        for (auto p : words) {
            int num = p.first;
            vector <ll> a = p.second;
            for (int j = 0; j + num <= note.size(); j++) {
                string b = note.substr(j, num);
                ll newH = hashing(b);
                for (int k = 0; k < a.size();k++) {
                    if (newH == a[k]) {
                        cout << "poggers";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "oh nose";
    
    return 0;
}

