class Solution {
public:
    string generateTheString(int n) {
        string s;
        if(n%2==0){
            while(s.length()<n-1){
                s.push_back('a');
            }
            s.push_back('b');
        }
        if(n%2!=0){
            while(s.length()<n){
                s.push_back('a');
            }
        }
        return s;
    }
};