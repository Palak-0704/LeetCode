class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(char ch : s){
            if(st.empty()){
                st.push(ch);
            }
            else if(int(st.top())!= int(ch)-32 && int(st.top())!= int(ch)+32){
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