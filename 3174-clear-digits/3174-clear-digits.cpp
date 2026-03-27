class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(char ch :s ){
            if( ('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z') ){
                st.push(ch);
            }
            else{
                st.pop();
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;

    }
};