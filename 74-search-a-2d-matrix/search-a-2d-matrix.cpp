class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // my first approach O(m*n) --> restriction failed

        // int rows = matrix.size();
        // int cols = matrix[0].size();
        // for(int i=0; i<rows; i++){
        //     for(int j=0; j<cols; j++){
        //         if(matrix[i][j] == target){
        //             return true;
        //         }
        //     }
        // }

        // Binary Search Approach
        // The main edge case
        if(matrix.empty() || matrix[0].empty()){
            return false;
        }

        int rows = matrix.size();
        int cols = matrix[0].size();

        int high = rows * cols - 1;
        int low = 0;

        while(low <= high){
            int mid = low + (high - low)/2;

            int row = mid/cols;
            int col = mid % cols;

            if(matrix[row][col] == target){
                return true;
            }
            else if(matrix[row][col] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return false;
    }
};