class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m= grid.size();
        int n= grid[0].size();
        vector<int> temp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                temp.push_back(grid[i][j]);
            }
        }
        while(k>0){
            temp.insert(temp.begin(),temp[temp.size()-1]);
            temp.pop_back();
            k--;
        }
        vector<vector<int>> res(m, vector<int>(n));
        int x=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                res[i][j]=temp[x];
                x++;
            }
        }
        return res;
    }
};