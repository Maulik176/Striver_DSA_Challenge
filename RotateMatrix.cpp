#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    //n - row
    //m - column
    int row = 0, col = 0;
    int prev, curr;
    /*
    row - Starting row index
    n - ending row index
    col - starting column index
    m - ending column index
    i - iterator
    */
    while(row < n && col < m){
      if (row + 1 == n || col + 1 == m) {
        break;
      }

      prev = mat[row + 1][col];

      for (int i = col; i < m; i++)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;

      for (int i = row; i < n; i++)
        {
            curr = mat[i][m-1];
            mat[i][m-1] = prev;
            prev = curr;
        }
        m--;

        if (row < n)
        {
            for (int i = m-1; i >= col; i--)
            {
                curr = mat[n-1][i];
                mat[n-1][i] = prev;
                prev = curr;
            }
        }
        n--;
 
        /* Move elements of first column from the remaining rows */
        if (col < m)
        {
            for (int i = n-1; i >= row; i--)
            {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    
    }
}

//my solution link - https://www.codingninjas.com/studio/problems/rotate-matrix_8230774?challengeSlug=striver-sde-challenge&leftPanelTab=1
