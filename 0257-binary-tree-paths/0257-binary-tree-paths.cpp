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
    /* void solve(TreeNode * root, string str ,vector<string> &res){
        if(root == NULL){
            return ;
        }
        str += to_string(root->val);
        if(root->left || root->right){
            str.append("->");
        }
        solve(root->left,str,res);
        solve(root->right,str,res);
        if(!root->left && !root->right){
            res.push_back(str);
        }
    } */
    void solve(TreeNode * root, string str ,vector<string> &res){
        if(root == NULL){
            return ;
        }
        str += to_string(root->val);

        if(!root->left && !root->right){
            res.push_back(str);
            return ;
        }
        
        str.append("->");
        solve(root->left,str,res);
        solve(root->right,str,res);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        string str;
        solve(root,str,res);
        return res;
    }
};