class Solution {
public:
    string reverseStr(string s, int k) {
        int n= s.length();
        for(int i=0;i<s.length();i+=2*k){
            if(n-i<k){
                reverse(s.begin()+i,s.end());
            }
            else if(n-i<2*k && n-i>=k){
                reverse(s.begin()+i,s.begin()+i+k);
                return s;
            }
            else{
                reverse(s.begin()+i,s.begin()+i+k);
            }
        }
        return s;
        
    }
};