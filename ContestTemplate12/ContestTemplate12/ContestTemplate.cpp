#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, temp;
    long counter = 0;
    vector<int> num;
    cin >> n >> m;

    for (int i = n; i--;)
    {
        cin >> temp;
        if (temp <= m)
            num.push_back(temp);
    }

    sort(num.begin(), num.end());

    for (long unsigned int i = 1; i < num.size(); i++)
    {
        if (num[i] + num[i - 1] > m)
        {
            for (int j = 1;; j++)
            {
                if (num[i] + num[i - j] <= m) {
                    counter += i - j + 1;
                    break;
                }
            }
        }
        else
        {
            counter += i;
        }
    }

    // for(long unsigned int i = 0; i < num.size(); i++) {
    //   if(num[i] > m/2) break;
    //  else {
    //     for(long unsigned int j = 1; j < num.size() - i; j++) {
    //        if(num[i] + num[i + j] <= m) ++counter;
    //   }
    // }
    //}

    if (counter >= 1000000007)
        counter = counter % 1000000007;

    cout << counter;

    return 0;
}