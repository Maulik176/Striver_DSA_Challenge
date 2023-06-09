#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size(); //row
	int m = matrix[0].size(); //col
	int row[n] = {0};
	int col[m] = {0};
	// Write your code here.
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){
				row[i] = 1;
				col[j] = 1;
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(row[i] == 1 || col[j] == 1){
				matrix[i][j] = 0;
			}
		}
	}
}

//my solution link :- https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge
