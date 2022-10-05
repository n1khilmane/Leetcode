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
TreeNode* addOneRow(TreeNode* root, int val, int depth, int l = 1) {
        if(depth == 1){
            TreeNode* newroot = new TreeNode(val);
            if(l)
                newroot->left = root;
            else    
                newroot->right = root;
            return newroot;
        }
        if(root){
            root->left = addOneRow(root->left, val, depth-1, 1);
            root->right =  addOneRow(root->right, val, depth-1, 0);
        }
        return root;
    }
};