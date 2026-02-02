class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int mid;
        while(left<=right){
            mid=left+(right-left)/2;
            if(nums[mid]>nums[right]){
                left=mid+1;
            }
            else if (nums[left]<nums[mid]){
                right=mid-1;
            }
            else{
                right--;
            }
        }
        return nums[left];
    }
};