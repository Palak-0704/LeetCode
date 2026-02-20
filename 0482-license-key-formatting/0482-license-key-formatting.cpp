class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        s.erase(remove(s.begin(),s.end(), '-'),s.end());
        for(int i=0;i<s.length();i++){
            s[i]=toupper(s[i]);
        }
        string res="";
        int count=0;
        for(int i=s.length()-1;i>=0;i--){
            if(count==k){
                res.push_back('-');
                count=0;
            }
            res+=s[i];
            count++;
        }
        reverse(res.begin(),res.end());
/*         int j=s.length();
        while(j-k>0){
            if(j-k>0){
                s.insert(j-k,"-");
            }
            j=j-k;
        } 
        return s;
        */
        return res;

    }
};