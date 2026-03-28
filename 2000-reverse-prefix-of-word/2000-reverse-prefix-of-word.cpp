class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0;
        while(i<word.length()&& word[i]!=ch){
            i++;
        }
        if(i==word.length()){
            return word;
        }
        stack<char>st;
        for(int j=0;j<=i;j++){
            st.push(word[j]);
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        for(int j=i+1;j<word.length();j++){
            res+=word[j];
        }
        return res;
    }
};