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
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> ans;
        if(root==NULL) return {};
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            
            int n = q.size();
            
            for(int i=n;i>0;i--)
            {
                TreeNode* node = q.front();
                q.pop();
                
                if(i==n) ans.push_back(node->val);
                
                if(node->right!=NULL)
                {
                    q.push(node->right);
                }
                
                if(node->left!=NULL)
                {
                    q.push(node->left);
                }
                
                
                
                
                
                
            }
            
            
        }
        
   return ans;
        
        
    }
    
         
        
    };