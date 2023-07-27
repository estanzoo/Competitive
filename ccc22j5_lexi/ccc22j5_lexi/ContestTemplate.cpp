// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//method to find the maximum square (brute force)
int findMax(int N, vector<vector<int>> coordinates, int numCords) {
	int result = 0;
	//nested loop to check each and every square on the grid
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			// This is the maximum squareLength of the square with the top left corner at (i, j)
			int squareLength = min(N - i + 1, N - j + 1);

			// Start from current maxLength result, we don't care for the smaller length anymore
			// Adding a flag, if we found a tree, we don't need to continue with larger length
			bool continueFlag = true;

			//loop to find the maximum possible square at (i,j), but now considering trees

			//note if result is already greater than the maximum squarelength at (i,j), we don't have to search thru the loop.
			//(eg. if we find the maximum square so far is 3 by 3, and we're at a coordinate that can only produce a max of a 2 by 2 square, we can safely skip it)
			for (int l = result; l <= squareLength && continueFlag; l++) {
				cout << "Square is at [" << i + "," << j << "] with length: " << l << "\n";

				// looping thru all tree coordinates, and if none are in our square, update the maxlength
				bool foundTrees = false;
				for (int k = 0; k < numCords; k++) {
					// Pay attention to the length l, we are checking coordinates from [i,j] to (i+l,j+l).
					//we should include [i,j] in our searching because the grid point in [i,j] will be inside the square, but not (i+l,j+l), as its grid point will be outside the square

					//if we found a tree in our square, we don't have to continue searching thru trees.
					if (coordinates[k][0] >= i && coordinates[k][0] < i + l
						&& coordinates[k][1] >= j && coordinates[k][1] < j + l
						) {
						foundTrees = true;
						continueFlag = false;
						cout << "Found tree at [" << coordinates[k][0] << ", " << coordinates[k][1] << "]" << "\n";
						break;
					}
				}
				//updating max length
				if (!foundTrees && result < l) {
					cout << "No trees! Update at [" << i << ", " << j << "]" << ", length from " << result << " to " << l << "\n";
					result = max(result, l);
				}
			}

			cout << "Square is at [" << i << "," << j << "], maxLength is " << result << "\n";
			cout << "\n";
		}
	}
	return result;
}

int main()
{
	int size, trees, currX, currY;
	cin >> size >> trees;
	vector<vector<int>> treeP(size, vector<int>(0, 0));
	for (int i = 0; i < trees; i++) {
		cin >> currX >> currY;
		treeP[i].push_back(currX);
		treeP[i].push_back(currY);
	}
	cout << findMax(size, treeP, trees);
}
