// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

unordered_map <char, int> values;
int nums[] = { 1,4,5,9,10,40,50,90,100,400,500,900,1000 };
string sym[] = { "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" };

int romToNum(string rom) {
    int curr, prev, sum = 0;
    prev = 10000;
    while (true)
    {
        curr = values.at(rom[0]);
        sum += curr;
        if (curr > prev)
        {
            sum -= 2 * prev;
        }
        prev = curr;
        if (rom.length() > 1)
            rom = rom.substr(1);
        else
            break;
    }
    return sum;
}

string numToRom(int num)
{
    string ans = "";
    for (int i = 12; i >= 0; i--)
    {
        if (num / nums[i] >= 1)
        {
            int div = num / nums[i];
            int rem = num % nums[i];
            for (int j = 0; j < div; j++)
            {
                ans += sym[i];
            }
            num = rem;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    values.emplace('I', 1);
    values.emplace('V', 5);
    values.emplace('X', 10);
    values.emplace('L', 50);
    values.emplace('C', 100);
    values.emplace('D', 500);
    values.emplace('M', 1000);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string line;
        cin >> line;
        int index = line.find('+');
        string first = line.substr(0, index);
        string second = line.substr(index + 1);
        second.erase(second.end() - 1);
        int one = romToNum(first);
        int two = romToNum(second);
        int sum = one + two;
        cout << line;
        if (sum > 1000)
            cout << "CONCORDIA CUM VERITATE" << "\n";
        else
        {
            cout << numToRom(sum) << "\n";
        }

    }
    return 0;
}

