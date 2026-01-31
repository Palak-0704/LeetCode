class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total_sum= 0;
        for(int i=0;i<nums.size();i++){
            total_sum+= nums[i];
        }
        int leftSum=0, RightSum;
        for(int i=0;i<nums.size();i++){
            RightSum= total_sum-leftSum-nums[i];
            if(leftSum==RightSum){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};