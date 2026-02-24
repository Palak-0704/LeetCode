class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int res=0;
        unordered_map<char,int>mp;
        for(char c: text){
            mp[c]++;
        }
        int b=0,a=0,l=0,o=0,n=0;
        int freq;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->first=='b'){
                b=it->second;
            }
            else if(it->first=='a'){
                a=it->second;
            }
            else if(it->first=='l'){
                l=it->second;
            }
            else if(it->first=='o'){
                o=it->second;
            }
            else if(it->first=='n'){
                n=it->second;
            }
        }
        if(b!=0 && a!=0 && l!=0 && o!=0 && n!=0){
            res = min({b, a, l/2, o/2, n});
        }
        return res;
    }
};