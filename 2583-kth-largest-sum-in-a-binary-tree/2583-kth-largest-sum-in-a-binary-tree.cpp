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
    vector<long long> solve(TreeNode * root){
        vector<long long> res;
        if(!root){
            return res;
        }
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            long long sum=0;
            int n =q.size();
            for(int i=0;i<n;i++){
                TreeNode * curr=q.front();
                sum+=curr->val;

                q.pop();

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            res.push_back(sum);
        }
        return res;
    }

    long long Largest(vector<long long>& res, int k) {
        sort(res.begin(), res.end());
        if(res.size() < k) return -1;
        return res[res.size() - k];
    }

    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> res;
        res=solve(root);
        long long ans = Largest(res,k);
        return ans; 
    }
};