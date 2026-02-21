class Solution {
public:
    string reverseWords(string s) {
        string res; 
        int i= s.length()-1;
        while(i>=0){
            string temp;
            while( i>=0 &&s[i]==' '){
                i--;
            }
            while(i>=0 && s[i]!=' '){
                temp+= s[i];
                i--;
            }
            reverse(temp.begin(), temp.end());
            if(temp.length()>0){
                res+= temp;
                res+=' ';
            }
        }
        res.pop_back();
        return res;
    }
};