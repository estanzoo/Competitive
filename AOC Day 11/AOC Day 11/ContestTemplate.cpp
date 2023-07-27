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

queue<ll> items[8];
pi op[8];
int test[8];
pi tar[8];
ll active[8];

void initialize() {
    items[0].push(59);
    items[0].push(65);
    items[0].push(86);
    items[0].push(56);
    items[0].push(74);
    items[0].push(57);
    items[0].push(56);

    items[1].push(63);
    items[1].push(83);
    items[1].push(50);
    items[1].push(63);
    items[1].push(56);

    items[2].push(93);
    items[2].push(79);
    items[2].push(74);
    items[2].push(55);

    items[3].push(86);
    items[3].push(61);
    items[3].push(67);
    items[3].push(88);
    items[3].push(94);
    items[3].push(69);
    items[3].push(56);
    items[3].push(91);

    items[4].push(76);
    items[4].push(50);
    items[4].push(51);

    items[5].push(77);
    items[5].push(76);

    items[6].push(74);

    items[7].push(86);
    items[7].push(85);
    items[7].push(52);
    items[7].push(86);
    items[7].push(91);
    items[7].push(95);

    op[0] = { 2, 17 };
    op[1] = { 1, 2 };
    op[2] = { 1, 1 };
    op[3] = { 1, 7 };
    op[4] = { 3, 3 };
    op[5] = { 1, 8 };
    op[6] = { 2, 2 };
    op[7] = { 1, 6 };

    test[0] = 3;
    test[1] = 13;
    test[2] = 2;
    test[3] = 11;
    test[4] = 19;
    test[5] = 17;
    test[6] = 5;
    test[7] = 7;


    tar[0] = { 3,6 };
    tar[1] = { 3,0 };
    tar[2] = { 0,1 };
    tar[3] = { 6,7 };
    tar[4] = { 2,5 };
    tar[5] = { 2,1 };
    tar[6] = { 4,7 };
    tar[7] = { 4,5 };







}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    initialize();
    for (int i = 0; i < 10000; i++) {
        for (int j = 0; j < 8; j++) {
            while (!items[j].empty()) {
                active[j]++;
                ll curr = items[j].front(); items[j].pop();
                if (op[j].first == 1) curr += op[j].second;
                else if (op[j].first == 2) curr *= op[j].second;
                else  curr = curr*curr;
                curr %= 9699690;
                if (curr % test[j] == 0) {
                    items[tar[j].first].push(curr);
                }
                else {
                    items[tar[j].second].push(curr);
                }
            }
        }
    }
    sort(active, active + 8);
    cout << active[7] * active[6];
    return 0;
}

