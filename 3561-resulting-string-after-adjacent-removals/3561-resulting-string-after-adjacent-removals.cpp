class Solution {
public:
    string resultingString(string s) {
        stack<char>st;
        for(char ch :s){
            bool res= false;
            if(!st.empty() 
            &&((abs(st.top()-ch)==1)
            ||(st.top() == 'a' && ch == 'z') 
            ||(st.top() == 'z' && ch == 'a'))){
                st.pop();
            }
            else{
                st.push(ch);
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