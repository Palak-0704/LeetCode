class Solution {
public:
    double myPow(double x, int n) {
        long long pow=n;
        if(pow==0){
            return 1;
        }
        if(pow<0){
            x= 1/x;
            pow=-pow;
        }
        double half = myPow(x, pow/2) ;
        if(pow%2==0){
            return half *half;
        }
        else{
            return x*half * half;
        }
    }
};