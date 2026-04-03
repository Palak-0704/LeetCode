class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        stack<int> st;
        for(int x:nums){
            int c=x;
            while(!st.empty() && st.top()>c){
                c = max(c, st.top());
                st.pop();
            }
            st.push(c);
        }
        return st.size();
    }
};