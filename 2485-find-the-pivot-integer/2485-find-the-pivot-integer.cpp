class Solution {
public:
    int pivotInteger(int n) {
        int Total = 0;
        for(int i=1;i<=n;i++){
            Total+= i;
        }
        int left=0;
        for(int i=1;i<=n;i++){
            if(left== Total-left-i){
                return i;
            }
            left+= i;
        }
        return -1;
    }
};