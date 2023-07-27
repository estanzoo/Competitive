// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string songs = "ABCDE";
    int curr, curr1;
    while (true)
    {
        cin >> curr >> curr1;
        if (curr == 1)
        {
            int times = curr1 % 5;
            string temp = songs.substr(0, times);
            songs = songs.substr(times);
            songs += temp;
        }
        else if (curr == 2)
        {
            int times = curr1 % 5;
            string temp = songs.substr(5 - times);
            songs = songs.substr(0, 5 - times);
            songs = temp + songs;
        }
        else if (curr == 3)
        {
            int times = curr1 % 2;
            if (times == 1)
            {
                string temp = songs.substr(0, 1);
                string temp1 = songs.substr(1, 1);
                songs = temp1 + temp + songs.substr(2);
            }
        }
        else break;
    }
    for (int i = 0; i < 5; i++) cout << songs[i] << " ";
    
    return 0;
}

