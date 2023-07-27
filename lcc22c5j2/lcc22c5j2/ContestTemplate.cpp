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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unordered_map<string, int> needed;
    unordered_map<string, int> whiteCount;
    unordered_map<string, int> blackCount;
    needed.emplace("B", 2);
    needed.emplace("P", 8);
    needed.emplace("R", 2);
    needed.emplace("Q", 1);
    needed.emplace("K", 1);
    needed.emplace("N", 2);
    whiteCount.emplace("B", 0);
    whiteCount.emplace("P", 0);
    whiteCount.emplace("R", 0);
    whiteCount.emplace("Q", 0);
    whiteCount.emplace("K", 0);
    whiteCount.emplace("N", 0);
    blackCount.emplace("B", 0);
    blackCount.emplace("P", 0);
    blackCount.emplace("R", 0);
    blackCount.emplace("Q", 0);
    blackCount.emplace("K", 0);
    blackCount.emplace("N", 0);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string col, piece; cin >> col >> piece;
        if (col[0] == 'B') {
            blackCount.at(piece)++;
        }
        else {
            whiteCount.at(piece)++;
        }
    }
    for (auto a : blackCount) {
        string currPiece = a.first;
        int occur = a.second;
        if (needed.at(currPiece) != occur) {
            for (int i = 0; i < needed.at(currPiece) - occur; i++) {
                cout << "B " << currPiece << "\n";
            }
        }
    }
    for (auto a : whiteCount) {
        string currPiece = a.first;
        int occur = a.second;
        if (needed.at(currPiece) != occur) {
            for (int i = 0; i < needed.at(currPiece) - occur; i++) {
                cout << "W " << currPiece << "\n";
            }
        }
    }
    return 0;
}

