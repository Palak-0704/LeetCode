
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int temp;
        for(int i=num.size()-1;i>=0;i--){
            temp= num[i]+k %10;
            num[i]= temp %10;
            k= k/10+ temp/10;
        }
        while(k>0){
            num.insert(num.begin(),k %10);
            k=k/10;
        }
        return num;
    }
};