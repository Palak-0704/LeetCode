class Solution {
public:
    bool isNumber(string s) {
        bool digit=0;
        bool dot=0;
        bool exp=0;
        bool digitexp=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>='0' && s[i]<='9'){  
                digit= 1;
                digitexp=1;
            }
            else if(s[i]=='.'){
                if(dot|| exp){
                    return false;
                }
                dot= 1;
            }
            else if(s[i]=='e' || s[i]=='E'){
                if(exp || !digit){   
                    return false;
                }
                exp= true;
                digitexp= false;
            }
            else if(s[i]=='+' || s[i]=='-'){
               if(i != 0 && s[i-1] != 'e' && s[i-1] != 'E'){ 
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return digit && digitexp;
    }
};