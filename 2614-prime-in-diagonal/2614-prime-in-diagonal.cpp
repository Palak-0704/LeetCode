class Solution {
public:
    bool isprime(int x){
        if(x<=1) return false;
        if(x==2) return true;
        if(x%2==0) return false;
        for(int i=3;i*i<=x;i+=2){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int max=0;
        for(int i=0;i<nums.size();i++){
            if(isprime(nums[i][i])){
                if(nums[i][i]>max){
                    max=nums[i][i];
                }
            }
            if(isprime(nums[i][nums.size()-1-i])){
                if(nums[i][nums.size()-1-i]>max){
                    max=nums[i][nums.size()-1-i];
                }
            }
        }
        return max;
    }
};