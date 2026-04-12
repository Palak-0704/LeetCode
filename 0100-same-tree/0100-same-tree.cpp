/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root, vector<int>&v){
        if(!root){
            v.push_back(INT_MIN);
            return;
        }
        v.push_back(root->val);
        solve(root->left,v);
        solve(root->right,v);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>v1;
        vector<int>v2;
        solve(p,v1);
        solve(q,v2);
        if(v1==v2){
            return true;
        }
        return false;
    }
};