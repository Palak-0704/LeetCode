class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double avg=sum;
        for(int i=k;i<nums.size();i++){
            sum= sum-nums[i-k];
            sum= sum+nums[i];
            avg=max(avg,sum);
        }
        return avg/k;
    }
};