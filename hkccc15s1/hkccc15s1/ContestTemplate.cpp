// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	bool first = false;
	int n, curr, lastIndex;
	long long sum, ans = 0;
	int mod = 1e9 + 7;
	vector<int> num;
	vector <int> toSub;
	scan(n);
	scan(sum);
	for (int i = 0; i < n; i++)
	{
		scan(curr);
		if (curr <= sum)
			num.push_back(curr);
	}
	sort(num.begin(), num.end());
	for (int i = 0; i < num.size(); i++)
		toSub.push_back(sum - num[i]);
	for (int i = 1; i < num.size(); i++)
	{
		if (num[i] + num[i - 1] <= sum)
			ans += i;
		else
		{
			if (first == false)
			{
				lastIndex = i - 1;
				first = true;
			}
			for (int j = lastIndex; j >= 0; j--)
			{
				if (num[j] <= toSub[i])
				{
					ans += j + 1;
					lastIndex = j;
					break;
				}
			}
		}
	}
	cout << (ans % mod);
	return 0;
}

