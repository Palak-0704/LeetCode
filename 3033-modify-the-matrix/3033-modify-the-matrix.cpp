class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        for(int j=0;j<matrix[0].size();j++){
            int max=0;
            for(int i=0;i<matrix.size();i++){
                if(max<matrix[i][j]){
                    max=matrix[i][j];
                }
            }
            for(int k=0;k<matrix.size();k++){
                if(matrix[k][j]==-1){
                    matrix[k][j]=max;
                }
            }
        }
        return matrix;
    }
};