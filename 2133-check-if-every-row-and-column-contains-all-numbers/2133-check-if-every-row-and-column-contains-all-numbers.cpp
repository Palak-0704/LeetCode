class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n= matrix.size();
        for(int i=0;i<matrix.size();i++){
            unordered_set<int>s;
            unordered_set<int> x;
            for(int j=0;j<matrix[0].size();j++){
                s.insert(matrix[i][j]);
                x.insert(matrix[j][i]);
            }
            if(s.size()!=n || x.size()!=n){
                return false;
            }
        }
        return true;
    }
};