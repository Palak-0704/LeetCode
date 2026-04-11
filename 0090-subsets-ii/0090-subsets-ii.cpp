class Solution {
public:
void solve(int idx, vector<int>&nums, vector<int>&path, vector<vector<int>>& ans){
    if(idx==nums.size()){
        int i=0;
        while(i<ans.size()){
            if(path==ans[i]){
                break;
            }
            i++;
        }
        if(i==ans.size()){
            ans.push_back(path);
        }
        return;
    }
        solve(idx+1, nums, path,ans);
        path.push_back(nums[idx]);
        solve(idx+1,nums,path,ans);
        path.pop_back();
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> path;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        solve(0,nums,path,ans);
        return ans;
    }
};