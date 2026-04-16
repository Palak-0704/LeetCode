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
 int num=1;
    int maxDepth(TreeNode* root) {
        int num=1;
        if(!root){
            return 0;
        }
        if(!root->left && !root->right){
            return num;
        }
        return max(num+maxDepth(root->left), num+maxDepth(root->right));    
    }
};