class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> s;
        s.push(root);
        
        while (!s.empty()) {
            TreeNode* curr = s.top();
            s.pop();
            if (!curr) continue;
            s.push(curr->left);
            s.push(curr->right);
            swap(curr->left, curr->right);
        }
        return root;
    }
};