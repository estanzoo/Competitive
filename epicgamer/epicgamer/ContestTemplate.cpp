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

char curr; string board[3];

bool checkStraight() {
    for (int i = 0; i < 3; i++) {
        int numWin = 0, numBlank = 0;
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == curr) numWin++;
            if (board[i][j] == '.') numBlank++;
        }
        if (numWin == 2 && numBlank == 1) return true;     
    }
    for (int i = 0; i < 3; i++) {
        int numWin = 0, numBlank = 0;
        for (int j = 0; j < 3; j++) {
            if (board[j][i] == curr) numWin++;
            if (board[j][i] == '.') numBlank++;
        }
        if (numWin == 2 && numBlank == 1) return true;
    }
    return false;
}
bool checkDiagonal() {
    int numWin = 0, numBlank = 0;
    for (int i = 0; i < 3; i++) {
        if (board[i][i] == curr) numWin++;
        if (board[i][i] == '.') numBlank++;
        if (numWin == 2 && numBlank == 1) return true;
    }
    numWin = 0, numBlank = 0;
    for (int i = 0; i < 3; i++) {
        if (board[i][2 - i] == curr) numWin++;
        if (board[i][2 - i] == '.') numBlank++;
        if (numWin == 2 && numBlank == 1) return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> curr >> board[0] >> board[1] >> board[2];  
    if (checkStraight() || checkDiagonal()) cout << "Epic\n";
    else cout << "Not Epic\n";
    return 0;
}

