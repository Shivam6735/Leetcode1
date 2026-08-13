class Solution {
public:
    // bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //     int rows = matrix.size();
    //     int cols = matrix[0].size();
    //     for(int i=0; i<rows; i++){
    //         for(int j=0; j<cols; j++){
    //             if(matrix[i][j] == target){
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    // }




    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()){
            return false;
        }

        int rows = matrix.size();
        int cols = matrix[0].size();

        int row = 0;
        int col = cols-1;

        while(row < rows && col >=0){
            if(matrix[row][col] == target){
                return true;
            }
            else if(matrix[row][col] > target){
                col--;
            }
            else{
                row++;
            }
        }
        
        return false;
    }
};