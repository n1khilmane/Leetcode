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
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root==NULL) return false;
        
        int newsum = 0;
        newsum = targetSum - root->val;
        
        if(root->left==NULL && root->right==NULL)
        {
            return newsum == 0;
        }
        
        return hasPathSum(root->left,newsum) || hasPathSum(root->right,newsum);
        
    }
};