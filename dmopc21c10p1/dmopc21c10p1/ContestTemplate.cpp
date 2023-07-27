// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

unordered_set<string> chars;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    chars.emplace("ka");
    chars.emplace("na");
    chars.emplace("ha");
    chars.emplace("ma");
    chars.emplace("ra");
    chars.emplace("ki");
    chars.emplace("ni");
    chars.emplace("hi");
    chars.emplace("mi");
    chars.emplace("ri");
    chars.emplace("ku");
    chars.emplace("nu");
    chars.emplace("fu");
    chars.emplace("mu");
    chars.emplace("ru");
    chars.emplace("ke");
    chars.emplace("ne");
    chars.emplace("he");
    chars.emplace("me");
    chars.emplace("re");
    chars.emplace("ko");
    chars.emplace("no");
    chars.emplace("ho");
    chars.emplace("mo");
    chars.emplace("ro");
    
    int n;
    string curr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        bool yes = true;
        int counter = 0;
        while (true)
        {
            if (counter == curr.length())
            {
                break;
            }
            if (curr[counter] == 'a' || curr[counter] == 'e' || curr[counter] == 'i' || curr[counter] == 'o' || curr[counter] == 'u') {
                counter++;
            }
            else if (counter + 1 <= curr.length() - 1)
            {
                if (chars.find(curr.substr(counter, 2)) != chars.end())
                {
                    counter += 2;
                    
                }
                else {
                    yes = false;
                    break;
                }

            }
            else {
                yes = false;
                break;
            }
        }
        if (yes)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

