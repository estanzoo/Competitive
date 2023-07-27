// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

int counter = 0;
vector <int> minimum;
vector <int> a;
//true if b is lexi.. smaller
bool compare()
{
    for (int i = 0; i < a.size(); i++)
    {
        if (minimum[i] != a[i+counter])
            return minimum[i] > a[i+counter];
    }
    return false;
}

void swap()
{
    for (int i = 0; i < minimum.size(); i++)
    {
        minimum[i] = a[i + counter];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, curr;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        a.push_back(curr);
    }
    minimum = a;
    if (n == 1)
        cout << 1 << "\n";
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (compare())
            {
                swap();
            }
            auto it = find(a.begin() + counter, a.end(), 1);
            int one = it - a.begin();
            if (one == counter)
            {
                int twoIndex = -1;
                int currentN = -1;

                for (int j = 1; j < n; j++)
                {
                    auto it = find(a.begin() + counter, a.end(), j + 1);
                    twoIndex = it - a.begin();
                    if (twoIndex > j+counter) {
                        currentN = j + 1;
                        break;
                    }
                }
                if (twoIndex != -1 && currentN != -1)
                {
                    int temp;
                    temp = a[currentN - 1];
                    a[currentN - 1] = currentN;
                    a[twoIndex] = temp;
                    if (compare())
                    {
                        swap();
                    }
                    a[currentN - 1] = temp;
                    a[twoIndex] = currentN;
                }
            }
            else
            {
                a[one] = a[counter];
                a[counter] = 1;
                if (compare())
                {
                    swap();
                }
                a[counter] = a[one];
                a[one] = 1;
            }
            int first = a[counter];
            counter++;
            a.push_back(first);
        }
        for (int i = 0; i < minimum.size(); i++)
        {
            if (i < minimum.size() - 1)
                cout << minimum[i] << " ";
            else
                cout << minimum[i] << "\n";
        }
    }
    return 0;
}



