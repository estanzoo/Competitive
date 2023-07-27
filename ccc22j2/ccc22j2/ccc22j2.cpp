#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, currPoint, currFoul, counter = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> currPoint >> currFoul;
        if ((currPoint * 5 - currFoul * 3) > 40)
            counter++;
    }
    cout << counter;
    if (counter == n)
        cout << "+";
    return 0;
}

