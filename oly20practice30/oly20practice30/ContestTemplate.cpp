// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)
vector<char> q;

//true = front, false = end
bool findOptimal(int front, int end) {
    if (end - front <= 2) return true;
    if (q[front + 1] > q[end - 1]) return false;
    else if (q[front + 1] < q[end - 1]) return true;
    else return findOptimal(front + 1, end - 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    char curr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        q.push_back(curr);
    }
    string ans = "";
    while (true)
    {
        if (q.size() == 1) break;
        if (q.front() < q.back()) {
            ans += q.front(); q.erase(q.begin());
        }
        else if (q.front() > q.back()){
            ans += q.back(); q.pop_back();
        }
        else
        {
            if (q.size() > 3)
            {
                bool yes = findOptimal(0, q.size() - 1);
                int index;
                if (yes) index = 0;
                else index = q.size() - 1;
                ans += q[index];
                q.erase(q.begin() + index);
            }
            else {
                ans += q.back(); q.pop_back();
            }
        }
    }
    ans += q.front();
    cout << ans << "\n";
    return 0;
}

