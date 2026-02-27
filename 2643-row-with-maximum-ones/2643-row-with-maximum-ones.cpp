class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> res;
        int rowcount=0;
        int rownum=0;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>rowcount){
                rowcount=count;
                rownum=i;
            }
        }
        res.push_back(rownum);
        res.push_back(rowcount);
        return res;
    }
};