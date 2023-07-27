// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define double float

int main()
{

    int n;
    cin >> n;
    double dTime= 0.0;
    vector <double> times;
    double maxN = -1.0;
    double minN = 101.0;
    for (int i = 0; i < 5; i++)
    {
        double curr;
        cin >> curr;
        if (curr > maxN)
            maxN = curr;
        if (curr < minN)
            minN = curr;
        dTime += curr;
    }
    dTime -= maxN;
    dTime -= minN;
    dTime /= 3.0;
    times.push_back(dTime);
    for (int i = 1; i < n; i++)
    {
        double currTime = 0.0;
        double max = -1.0;
        double min = 100.0;
        for (int j = 0; j < 5; j++)
        {
            double curr;
            cin >> curr;
            currTime += curr;
            if (curr > max)
                max = curr;
            if (curr < min)
                min = curr;
        }
        currTime -= max;
        currTime -= min;
        currTime /= 3.0;
        times.push_back(currTime);
    }
    sort(times.begin(), times.end());
    int index = 0;
    for (int i = 0; i < n; i++)
    {    
        if (dTime == times[i])
            break;
        if (dTime > times[i])
            index++;
    }
    cout << index + 1;

    return 0;
}

