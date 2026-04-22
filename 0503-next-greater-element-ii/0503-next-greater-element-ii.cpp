class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        vector<int>res (nums.size(), -1);
        for (int i=0;i<2*nums.size();i++){
            int c= nums[i % nums.size()];
            while(!st.empty() && nums[st.top()] <c){
                res[st.top()]=c;
                st.pop();
            }
            if(i<nums.size()){
                st.push(i);
            }
        }
        return res;
    }
};