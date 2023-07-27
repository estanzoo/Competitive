#include <bits/stdc++.h>
using namespace std;
const int MM = 1e7 + 3;

int da[MM];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b, curr = 0, max = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        da[a]++;
        da[b]--;
    }
    for (int i = 1; i < MM; i++){
        curr += da[i];
        if (curr > max) max = curr;
    }
    cout << max;
    return 0;
}

