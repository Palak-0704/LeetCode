class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        for(int i=0;i<nums2.size();i++){
            for(int j=0;j<nums2.size()-1;j++){
                if(nums2[j]>nums2[j+1]){
                    swap(nums2[j],nums2[j+1]);
                }
            }
        }
        for(int i=0;i<nums1.size();i++){
            int left=0;
            int right=nums2.size()-1;
            int mid;
            int found=1;
            while(left<=right){
                mid=(left+right)/2;
                if(nums2[mid]==nums1[i]){
                    for(int j=0;j<result.size();j++){
                        if(nums1[i]==result[j]){
                            found=0;
                            break;
                        }
                    }
                    if(found!=0){
                        result.push_back(nums1[i]);
                    }
                    break;  
                }
                else if(nums1[i]<nums2[mid]){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
        }
        return result;
    }
};