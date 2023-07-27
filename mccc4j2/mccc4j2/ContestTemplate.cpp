// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <climits>
#include <queue>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
using namespace std;

int main()
{
    int n, a, b, aTime = 0, bTime = 0;
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x < a) aTime++;
        else aTime += 2;
        if (y < b) bTime++;
        else bTime += 2;
    }
    if (aTime < bTime)
        cout << "Andrew wins!" << "\n";
    else if (bTime < aTime)
        cout << "Tommy wins!" << "\n";
    else
        cout << "Tie!" << "\n";
}

