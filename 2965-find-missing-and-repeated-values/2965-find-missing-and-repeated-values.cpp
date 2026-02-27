class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>mp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                mp[grid[i][j]]++;
            }
        }
        int rep;
        int missing;
        for(int i=1;i<=grid.size()*grid.size();i++){
            if(mp[i]==2){
                rep=i;
            }
            if(mp[i]==0){
                missing=i;
            }
        }
        return {rep,missing};
    }
};