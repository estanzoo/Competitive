// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)
int n, rec[101], times[101], numRec[101], numRep[101];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    memset(rec, -1, sizeof(rec));
    memset(times, 0, sizeof(times));
    memset(numRec, 0, sizeof(numRec));
    memset(numRep, 0, sizeof(numRep));
    char p;
    int cTime = 0;
    for (int i = 1, curr; i <= n; i++) {
        cin >> p >> curr;
        if (p == 'R') {
            rec[curr] = cTime; cTime++;
            numRec[curr]++;
        }
        else if (p == 'S') {
            times[curr] += cTime - rec[curr]; 
            cTime++;
            numRep[curr]++;

        }
        else cTime += curr - 1;
    }
    for (int i = 0; i < 101; i++) {
        if (times[i] != 0 && numRec[i] == numRep[i]) {
            cout << i << " " << times[i] << "\n";
        }
        else if (numRec[i] != numRep[i]) cout << i << " " << -1 << "\n";
    }

    return 0;
}

