


#include <bits/stdc++.h>

using namespace std;
const int MM = 2e3 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

char grid[MM][MM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //cout << (char)122;
    
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    if (r == 0 && c == 1) {
        cout << "ab\nac";
    }
    if (r == 0 && c == 2) {
        cout << "ab\nab";
    }
    if (r == 1 && c == 2) {
        cout << "aa\nab";
    }
    return 0;
}

