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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            double temp = q.size();
            double sum = 0;
            
            for(int i=0;i<temp;i++){
                
                auto k = q.front();
                q.pop();
                sum += k->val;
                
                if(k->left) q.push(k->left);
                if(k->right) q.push(k->right);
            }
            
             ans.push_back(sum/temp);
                
        }
        
         return ans; 
                   
        }
    
       
        
    
};