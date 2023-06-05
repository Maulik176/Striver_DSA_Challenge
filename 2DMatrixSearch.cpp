bool searchMatrix(vector<vector<int>>& mat, int target) {
    int row =0;
    int col = mat[0].size()-1;
    while(row < mat.size() && col >=0){
        if(mat[row][col] == target){
            return true;
        }
        else if(mat[row][col] > target){
            col--;
        }
        else{
            row++;
        }
    }
    return false;
}

//my solution link :- https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_8230773?challengeSlug=striver-sde-challenge&leftPanelTab=1
