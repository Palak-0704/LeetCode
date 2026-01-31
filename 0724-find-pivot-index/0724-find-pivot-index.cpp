class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            totalSum += nums[i];
        }
        int leftSum = 0, RightSum;
        for (int i = 0; i < nums.size(); i++) {
            RightSum = totalSum - leftSum - nums[i];
            if (leftSum == RightSum) {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};