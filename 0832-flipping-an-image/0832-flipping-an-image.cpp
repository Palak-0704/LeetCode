class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n,i,j;
        n=image.size();
        vector<vector<int>>reverse(n,vector<int>(n));
        for(i=0;i<n;i++){
            for(j=n;j>0;j--){
              reverse[i][n-j]=image[i][j-1];  
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(reverse[i][j]==0){
                    reverse[i][j]=1;
                }
                else{
                    reverse[i][j]=0;
                }
            }
        }
        return reverse;
    }
};