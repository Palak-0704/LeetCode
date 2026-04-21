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
/* void solve(TreeNode *root, int key){
    if(!root){
        return;
    }
    if(root->left && root->left->left && root->left->val==key){
        TreeNode * temp=root->left;
        root->left=root->left->left;
    }
    else if(root->right && root->right->right &&root->right->val==key){
        TreeNode * temp=root->right;
        root->right=root->right->right;
    }
    solve(root->left,key);
    solve(root->right,key);
} */
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root){
            return NULL;
        }
        if(key<root->val){
            root->left=deleteNode(root->left,key);
        }
        else if(key>root->val){
            root->right=deleteNode(root->right,key);
        }
        else{
            // noo child
            if(!root->left && !root->right){
                delete root;
                return NULL;
            }
            // left child
            else if(!root->right){
                TreeNode * temp= root->left;
                delete root;
                return temp;
            }
            //right child 
            else if(!root->left){
                TreeNode * temp=root->right;
                delete root;
                return temp;
            }
            else {
                TreeNode * temp =root->right;
                while(temp->left){
                    temp=temp->left;
                }
                root->val=temp->val;
                root->right=deleteNode(root->right,temp->val);
            }
        }
        return root;
    }
};