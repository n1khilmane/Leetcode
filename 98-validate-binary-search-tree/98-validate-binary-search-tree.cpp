class Solution {
public:
      bool isBST(TreeNode* root, TreeNode* minNode, TreeNode* maxNode){
        if(root == NULL)
            return true;
        if(minNode && root ->val <= minNode ->val || maxNode && root ->val >= maxNode ->val)
            return false;
        return isBST(root ->left, minNode, root) && isBST(root ->right, root, maxNode);
    }
    bool isValidBST(TreeNode* root) {
        return isBST(root, NULL, NULL);
    }
};