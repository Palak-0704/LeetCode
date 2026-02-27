class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>mp;
        vector<int>res;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                mp[grid[i][j]]++;
            }
        }
        for(auto it :mp){
            if(it.second==2){
                res.push_back(it.first);
            }
        }
        for(int i=1;i<=grid.size()*grid.size();i++){
            if(!mp.count(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};