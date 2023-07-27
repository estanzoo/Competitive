#include <bits/stdc++.h>
using namespace std;

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(false);

    int kX, kY, numOfPieces;
    cin >> kX >> kY >> numOfPieces;
    int pX1, pY1, points1 = -1;
    int pX, pY, points;

    for (int i = 0; i < numOfPieces; i++) {
        cin >> pX >> pY >> points;
        if (((abs(kX - pX) == 2 && abs(kY - pY) == 1) || (abs(kX - pX) == 1 && abs(kY - pY) == 2)) && points > points1) {
            pX1 = pX;
            pY1 = pY;
            points1 = points;
        }
    }

    if (points1 > -1)
        cout << pX1 << " " << pY1;
    else
        cout << "-1";
}