class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original,int m,int n) {
        vector<vector<int>> res(m, vector<int>(n));
        int x=0;
        if(original.size()!= m*n){
            return {};
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res[i][j]=original[x];
                x++;
            }
        }
        return res;
    }
};