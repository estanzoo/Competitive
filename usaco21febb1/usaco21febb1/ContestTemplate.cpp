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
    unordered_map<string, pair <string, int>> a;
    vector <string> years = { "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};
    int n;
    string name, which, whichYear, fromWho, curr;
    cin >> n;
    pair <string, int> bessie;
    bessie = make_pair("Ox", 0);
    a.emplace("Bessie", bessie);
    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x < 8; x++)
        {
            cin >> curr;
            switch (x)
            {
                case 0: name = curr;
                case 3: which = curr;
                case 4: whichYear = curr;
                case 7: fromWho = curr;
            }
        }
        int indexCurrent = find(years.begin(), years.end(), whichYear) - years.begin();
        int indexFrom = find(years.begin(), years.end(), a.at(fromWho).first) - years.begin();
        int currYear = a.at(fromWho).second;
        if (which.compare("previous") == 0 && indexFrom <= indexCurrent)
        {
            currYear += 12 - (indexCurrent-indexFrom);
        }
        else if (which.compare("previous") == 0 && indexFrom > indexCurrent)
        {
            currYear += indexFrom - indexCurrent;
        }
        else if (which.compare("next") == 0 && indexFrom >= indexCurrent)
        {
            currYear -= 12 - (indexFrom - indexCurrent);
        }
        else if (which.compare("next") == 0 && indexFrom < indexCurrent)
        {
            currYear -= indexCurrent - indexFrom;
        }
        a.emplace(name, make_pair(whichYear, currYear));
    }
    cout << abs(a.at("Elsie").second);
    return 0;
}

