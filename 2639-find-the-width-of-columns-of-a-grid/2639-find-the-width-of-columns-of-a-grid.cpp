class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int max;
        vector<int>res;
        int count1=0;
        int count2=0;
        for(int j=0;j<grid[0].size();j++){
            max= 0;
            for(int i=0;i<grid.size();i++){
                int len = to_string(grid[i][j]).length();
                if(len>max){
                    max=len;
                }
            }
            res.push_back(max);
        }
        return res;
    }
};