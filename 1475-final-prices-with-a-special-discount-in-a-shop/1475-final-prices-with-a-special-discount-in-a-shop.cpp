class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        vector<int>ans= prices;
        /* for(int i=0;i<prices.size()-1;i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    ans.push_back(prices[i]-prices[j]);
                    break;
                }
                else if(prices[i]<prices[j] && j==prices.size()-1){
                    ans.push_back(prices[i]);
                }
            }
        }
        ans.push_back(prices[prices.size()-1]); */

        for(int i=0;i<prices.size();i++){
            while(!st.empty() && prices[st.top()] >= prices[i]){
                ans[st.top()]= prices[st.top()]-prices[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};