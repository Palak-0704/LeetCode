class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_length=nums.size()+1;
        int i=0;
        int sum=0;
        for(int j=i;j<nums.size();j++){
            sum+=nums[j];
            while(sum>= target){
                min_length= min(min_length, j-i+1);
                sum-=nums[i];
                i++;
            }
        }
        return (min_length==nums.size()+1)? 0: min_length;
    }
};