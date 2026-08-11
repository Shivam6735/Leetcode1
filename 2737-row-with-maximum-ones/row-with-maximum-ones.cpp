class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int maxOne = 0;
        int maxRow = 0;
        int countOne = 0;

        for(int i=0; i<rows; i++){
            countOne = 0;
            for(int j=0; j<cols; j++){
                if(mat[i][j] == 1){
                    countOne ++;
                }
            }
            
            if(countOne > maxOne){
                maxOne = countOne;
                maxRow = i;
            }
            
        }
        return {maxRow , maxOne};
    }
};