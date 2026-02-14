class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int>res;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] == nums[i]){
                nums[i-1]= nums[i-1]*2;
                nums[i]=0;
            }
        }
        res= nums;
        for(int i=nums.size()-1;i>=0;i--){
            if (res[i] ==0){
                res.push_back(0);
                res.erase(res.begin() + i);
            }
        }
        return res;
    }
};