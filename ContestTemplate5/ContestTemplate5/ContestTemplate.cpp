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
    int f, m, b, tf, tm, tb, sum, mon;
    cin >> f >> m >> b >> tf >> tm >> tb;
    sum = tf + tm + tb;
    mon = f * tf + m * tm + b * tb;
    cout << sum << " " << mon << "\n";
    return 0;
}

