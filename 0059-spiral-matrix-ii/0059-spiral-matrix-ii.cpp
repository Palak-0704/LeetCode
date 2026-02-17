class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>>result(n ,vector<int>(n,0));
        int i,j,x,y,k;
        int num =1;
        if(n==1){
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    result[i][j]=n;
                }
            }
        }
        if(num!=n*n){
            for(i=0;i<n;i++){
                for(j=i;j<n-i;j++){
                    result[i][j]=num;
                    num++;
                    if(j==n-1-i){
                        for(x=i+1;x<n-i;x++){
                            result[x][j]=num;
                            num++;
                            if(x==n-1-i){
                                for(y=n-2-i;y>=i;y--){
                                    result[x][y]=num;
                                    num++;
                                    if(y==i){
                                        for(k=n-2-i;k>i;k--){
                                            result[k][y]=num;
                                            num++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return result;  
    }
};