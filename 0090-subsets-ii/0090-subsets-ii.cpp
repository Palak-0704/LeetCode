class Solution {
public:
void solve(int idx, vector<int>&nums, vector<int>&path, vector<vector<int>>& ans){
    ans.push_back(path);
    for(int i=idx;i<nums.size();i++){
        if(i>idx && nums[i]==nums[i-1]){
            continue;
        }
        path.push_back(nums[i]);
        solve(i+1,nums,path,ans);
        path.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> path;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        solve(0,nums,path,ans);
        return ans;
    }
};