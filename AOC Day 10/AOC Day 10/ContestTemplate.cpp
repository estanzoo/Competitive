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

vector<string> split(string a) {
    vector<string> ans;
    string curr = "";
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == ' ') {
            ans.push_back(curr);
            curr = "";
        }
        else curr += a[i];
    }
    ans.push_back(curr);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string ans = "";
    int cycles = 0, x = 1, counter = 0, mid = 1;
    for (int y = 0; y < 139; y++) {
        string curr; getline(cin, curr);
        if (curr[0] == 'n') {
            cycles++;
            if ((cycles - 1 == mid) || (cycles - 1 == mid - 1) || (cycles - 1 == mid + 1)) ans += "#";
            else ans += ".";
            if ((cycles == 40) || (cycles == 80) || (cycles == 120) || (cycles == 160) || (cycles == 200)) {
                ans += "\n";
                x += 40;
            }
        }
        else {
            string a = curr.substr(5);
            int c = stoi(a);
            cycles++;
            if ((cycles - 1 == mid) || (cycles - 1 == mid - 1) || (cycles - 1 == mid + 1)) ans += "#";
            else ans += ".";
            if ((cycles == 40) || (cycles == 80) || (cycles == 120) || (cycles == 160) || (cycles == 200)) {
                ans += "\n";
                x += 40;
            }
            cycles++;
            if ((cycles - 1 == mid) || (cycles - 1 == mid - 1) || (cycles - 1 == mid + 1)) ans += "#";
            else ans += ".";
            if ((cycles == 40) || (cycles == 80) || (cycles == 120) || (cycles == 160) || (cycles == 200)) {
                ans += "\n";
                x += 40;
            }
            x += c;
            mid = x;
        }
    }
    cout << ans;
    return 0;
}

