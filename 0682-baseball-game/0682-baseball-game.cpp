class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(string ch :operations){
            if(ch=="C" && !st.empty()){
                st.pop();
            } 
            if(ch=="D"){
                int x = 2*st.top();
                st.push(x);
            }
            if(ch=="+"){
                int sum=0;
                int a= st.top();
                st.pop();
                int b= st.top();
                sum= a+b;
                st.push(a);
                st.push(sum);
            }
            else{
                if(ch!= "C" && ch!="D" && ch!="+" ){
                    st.push(stoi(ch));
                }
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};