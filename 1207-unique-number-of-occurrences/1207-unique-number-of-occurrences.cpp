class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int c:arr){
            mp[c]++;
        }
        unordered_set<int> s;
        for(auto c :mp){
            if(s.count(c.second)){
                return false;
            }
            s.insert(c.second);
        }
        return true;
    }
};