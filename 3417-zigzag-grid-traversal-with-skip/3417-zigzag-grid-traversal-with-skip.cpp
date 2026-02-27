class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> res;
        int i=0;
        int j=0;
        int count=0;
        while(i<grid.size()){
            j=0;
            while(j<grid[0].size()){
                if(count%2==0){
                    res.push_back(grid[i][j]);
                }
                count++;
                j++;
            }
            i++;
            if(i >= grid.size()) break;
            j= grid[0].size()-1;
            while(j>=0){
                if(count%2==0){
                    res.push_back(grid[i][j]);
                }
                count++;
                j--;
            }
            i++;
        }
        return res;
    }
};