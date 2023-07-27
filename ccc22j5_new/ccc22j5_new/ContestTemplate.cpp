// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int iMax;
int iResult;

struct MyStruct
{
	int row;
	int column;
};

bool compare(MyStruct a, MyStruct b) {
	return a.column > b.column;
};

bool Check(vector<MyStruct>trees, MyStruct currnt, bool bleft = true) {
	bool bExit = false;
	int itmp;
	int iVertical = iMax;
	int iHorizontal = iMax;
	int iup = iMax;
	int idown = 0;

	bool checkresult;

	int ileft = trees.size() - 1;

	for (int i = ileft; i >= 0; i--)
	{
		if (trees[i].row == currnt.row)
		{
			bExit = true;
			itmp = abs(currnt.column - trees[i].column) - 1;
			iHorizontal = min(itmp, iHorizontal);
			itmp = min(iHorizontal, iVertical);
			iResult = max(iResult, itmp);
			break;
		}
		else
		{
			checkresult = false;
			for (int j = i; j >= 0; j--)
			{
				if (trees[j].column == trees[i].column)
				{
					if (trees[j].row < currnt.row)
					{
						if (trees[j].row > idown)
						{
							idown = trees[j].row;
							checkresult = true;
						}
					}
					else
					{
						if (trees[j].row < iup)
						{
							iup = trees[j].row;
							checkresult = true;
						}

					}
				}
				else
				{
					i = j + 1;
					break;
				}
			}
			if (checkresult)
			{
				itmp = abs(currnt.column - trees[i].column) - 1;
				itmp = min(itmp, iVertical);
				iResult = max(iResult, itmp);
				itmp = iup - idown - 1;
				if (itmp <= iResult)
				{
					bExit = true;
					break;
				}
				else
					iVertical = min(itmp, iVertical);
			}
		}
	}

	if (bExit == false) {
		if (bleft)
			iHorizontal = currnt.column - 1;
		else
			iHorizontal = iMax - currnt.column;
		itmp = min(iHorizontal, iVertical);
		iResult = max(iResult, itmp);
	}

	return 0;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;

	MyStruct flag[100];
	vector<MyStruct>tleft;
	vector<MyStruct>tright;

	cin >> iMax;
	cin >> n;
	MyStruct current;
	iResult = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> flag[i].row;
		cin >> flag[i].column;

		tright.push_back(flag[i]);
	}


	sort(tright.begin(), tright.end(), compare);


	tleft.clear();

	while (tright.size() > 0)
	{
		current = tright[tright.size() - 1];
		tright.pop_back();
		// check next tree and following
		Check(tleft, current);
		tleft.emplace_back(current);

		Check(tright, current, false);
	}

	tright.clear();
	for (int i = 0; i < n; i++) {
		current.column = flag[i].row;
		current.row = flag[i].column;
		tright.push_back(current);

	}
	sort(tright.begin(), tright.end(), compare);


	tleft.clear();

	while (tright.size() > 0)
	{
		current = tright[tright.size() - 1];
		tright.pop_back();
		// check next tree and following
		Check(tleft, current);
		tleft.emplace_back(current);

		Check(tright, current, false);
	}
	cout << iResult;
}

