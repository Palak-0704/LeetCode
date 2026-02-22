class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>result;
        unordered_set<int>set;
        for(int c :nums){
            if(set.count(c)){
                result.push_back(c);
            }
            set.insert(c);
        }
        for(int i=1;i<=nums.size();i++){
            if(!set.count(i)){
                result.push_back(i);
            }
        }
        return result;
    }
};