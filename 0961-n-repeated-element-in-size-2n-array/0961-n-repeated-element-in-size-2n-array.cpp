class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int c: nums){
            mp[c]++;
        }
        int count=0;
        for (auto i = mp.begin(); i != mp.end(); i++){
            if(i->second==1){
                count++;
            }
        }
        for (auto i = mp.begin(); i != mp.end(); i++){
            if(i->second==count){
                return i->first;
            }
        }
        return 0 ;
    }
};