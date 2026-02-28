class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if(mat.empty() || mat[0].empty()) return {};
        vector<int> res;
        int diagonal=mat.size()+mat[0].size()-1;
        for(int d=0;d<diagonal;d++){
            vector<int>temp;
            int i,j;
            if(d<mat[0].size()){
                i=0;
                j=d;
            }
            else{
                i=d-mat[0].size()+1;
                j=mat[0].size()-1;

            }
            while(i<mat.size() && j>=0){
                temp.push_back(mat[i][j]);
                i++;
                j--;
            }
            if(temp.size()%2!=0){
                reverse(temp.begin(),temp.end());
            }
            for(int x:temp){
                res.push_back(x);
            }
        }
        return res;
    }
};