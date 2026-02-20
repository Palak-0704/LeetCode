class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        s.erase(remove(s.begin(),s.end(), '-'),s.end());
        for(int i=0;i<s.length();i++){
            s[i]=toupper(s[i]);
        }

        int j=s.length();
        while(j>0){
            if(j-k>0){
                s.insert(j-k,"-");
            }
            j=j-k;
        }
        return s;

    }
};