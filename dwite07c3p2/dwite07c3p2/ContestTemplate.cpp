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
    string curr;
    for (int x = 0; x < 5; ++x)
    {
        getline(cin, curr);
        bool inComment = false, inString = false, inStringS = false;
        string output = "";
        for (int i = 0; i < curr.length(); i++)
        {
            if (inComment)
            {
                if (curr[i] == '*')
                {
                    if (curr[i - 1] != '/' && i - 1 >= 0 && curr[i + 1] != '/' && i + 1 < curr.length()) output += curr[i];
                }
                else if (curr[i] == '/')
                {
                    if (curr[i - 1] != '*' && i - 1 >= 0 && curr[i + 1] != '*' && i + 1 < curr.length()) output += curr[i];
                }
                else output += curr[i];
            }
            if (inString && curr[i] != '\"') output += curr[i];
            if (inStringS && curr[i] != '\'') output += curr[i];

            if (curr[i] == '\"' && !inComment && !inString && !inStringS) inString = true;
            else if(inString)
            {
                if (curr[i] == '\"') {
                    inString = false;
                    output += ' ';
                }
            }
            if (curr[i] == '\'' && !inComment && !inString && !inStringS) inStringS = true;
            else if (inStringS)
            {
                if (curr[i] == '\'') {
                    inStringS = false;
                    output += ' ';
                }
            }
            if (curr[i] == '/' && i + 1 < curr.length() && curr[i + 1] == '*' && !inComment && !inString && !inStringS) inComment = true;
            else if (inComment)
            {
                if (curr[i] == '*' && i + 1 < curr.length() && curr[i + 1] == '/') {
                    inComment = false; output += ' ';
                }
            }
            if (curr[i] == '/' && i + 1 < curr.length() && curr[i + 1] == '/' && !inComment && !inString && !inStringS)
            {
                output += curr.substr(i + 2);
                break;
            }
        }
        if (output[output.length() - 1] == ' ')
        {
            output = output.substr(0, output.length() - 1);
        }
        output += '\n';
        cout << output;
    }
    return 0;
}

