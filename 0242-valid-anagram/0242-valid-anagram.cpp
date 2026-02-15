class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()){
            return false;
        }
        map<char, int>mp;
        for(int i=0;i<s.size();i++){
            char c = s[i];
            mp[c]++;
        }
        for(int i=0;i<t.size();i++){
            char c= t[i];
            if(mp[c]==0){
                return false;
            }
            mp[c]--;
        }
        return true;
    }
};