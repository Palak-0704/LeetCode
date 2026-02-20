class Solution {
public:
    bool detectCapitalUse(string word) {
        int a=0;
        for(int i=0;i<word.length();i++){
            if(word[i]>=65 && word[i]<=90){
                a++;
            }
        }
        if(a== word.length()){
            return true;
        }
        if(a==0){
            return true;
        }
        if(word[0]>=65 && word[0]<=90 && a==1){
            return true ;
        }
        return false;
    }
};