// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
int main()
{
    string str;
    getline(cin, str, '\n');
    bool inEmoji = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (inEmoji == false && str[i] == ':')
            inEmoji = true;
        else if (inEmoji == true && str[i] == ':')
        {
            inEmoji = false;
            cout << "\n";
        }
        if (inEmoji == true && str[i] != ':')
            cout << str[i];
    }
    return 0;
}
*/
int main()
{
    string str;
    getline(cin, str, '\n');
    vector <string> emojis;
    bool inEmoji = false;
    string currentChar = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (inEmoji == false && str[i] == ':')
            inEmoji = true;
        else if (inEmoji == true && str[i] == ':')
        {
            inEmoji = false;
            emojis.push_back(currentChar);
            currentChar = "";
        }
        if (inEmoji == true && str[i] != ':')
        {
            currentChar += str[i];
        }
    }
    for (int i = 0; i < emojis.size(); i++)
    {
        cout << emojis[i] << "\n";
    }
    return 0;
}
