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

vector<int> check(string a) {
    string curr = "";
    string nums = "0123456789";
    vector<int>ans;
    for (int i = 0; i < a.length(); i++) {
        if (nums.find(a[i]) != string::npos) {
            curr += a[i];
        }
        else if (curr.compare("") != 0) {
            ans.push_back(stoi(curr));
            curr = "";
        }

    }
    ans.push_back(stoi(curr));
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    stack <char> a[10];
    string currs[10] = { "", "MJCBFRLH", "ZCD", "HJFCNGW", "PJDMTSB", "NCDRJ", "WLDQPJGZ", "PZTFRH", "LVMG", "CBGPFQRJ" };
    for (int i = 1; i <= 9; i++) {
        string c = currs[i];
        for (int j = 0; j < c.length(); j++) {
            a[i].push(c[j]);
        }
    }
    for (int i = 0; i < 503; i++) {
        string curr;
        getline(cin, curr);
        vector<int> elements = check(curr);
        string ans = "";
        for (int j = 0; j < elements[0]; j++) {
            char q = a[elements[1]].top(); a[elements[1]].pop();
            ans += q;
        }
        for (int j = elements[0] - 1; j >= 0; j--) {
            a[elements[2]].push(ans[j]);
        }
    }
    for (int i = 1; i <= 9; i++) {
        cout << a[i].top();
    }
    return 0;
}

