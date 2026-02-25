class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count=0;
        for(int i=0;i<mat.size();i++){
            int m1 =0;
            int col=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j] == 1){
                    if(m1 == 1){
                        m1 = 2; 
                        break;  
                    }
                    else{
                        m1 = 1;
                        col = j;
                    }
                }
            }
            if(m1==1){
                int m2=0;
                for(int k=0;k<mat.size();k++){
                    if(mat[k][col]==1){
                        m2++;
                    }
                }
                if(m2==1){
                    count++;
                }
            }
        }
        return count;
    }
};