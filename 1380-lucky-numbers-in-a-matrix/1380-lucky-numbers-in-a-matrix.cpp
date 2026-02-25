class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> res;
        for(int i=0;i<matrix.size();i++){
            int m1 =matrix[i][0];
            int col=0;
            for(int j=0;j<matrix[0].size();j++){
                if(m1>matrix[i][j]){
                    m1= matrix[i][j];
                    col=j;
                }
            }
            int m2= matrix[0][col];
            for(int k=0;k<matrix.size();k++){
                if(m2<matrix[k][col]){
                    m2= matrix[k][col];
                }
            }
            if(m1==m2){
                res.push_back(m1);
            }
        }
        return res;
    }
};