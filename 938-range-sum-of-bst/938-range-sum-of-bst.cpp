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
    
private: int sum;
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        sum=0;
        dfs(root,low,high);
        return sum;
        
    }

private:
    void dfs(TreeNode* root, int low, int high)
    {
        if(root==NULL)
            return;
        
        if(low<=root->val && root->val<=high){
            sum = sum + root->val;
        }
        
        if(low<root->val)
            dfs(root->left,low,high);
        
        if(high>root->val)
            dfs(root->right,low,high);
    }
    

};