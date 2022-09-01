class Solution {
public:
    int goodNodes(TreeNode* root) {
        
        int result = 0;
        dfs(root, root->val, result);
        return result;
       
    }
    
    void dfs(TreeNode* root, int maxi, int &result)
    {
        
        if(root==NULL) return;
        
        if(root->val >= maxi) result++;
        
        dfs(root->left, max(maxi, root->val), result);
        dfs(root->right, max(maxi, root->val), result);
        
        
    }
    
    
};