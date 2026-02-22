class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>res;
        sort(nums.begin(),nums.end());
        int min=nums[0];
        int max=nums[nums.size()-1];
        unordered_map<int, int>mp;
        for(int c:nums){
            mp[c]++;
        }
        for(int i= min;i<=max;i++){
            if(!mp.count(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};