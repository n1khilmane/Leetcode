class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(!root)
        {
            return ans;
        }
        vector<int> vi;
        
        queue<Node* > q;
        q.push(root);
        
        
        while(!q.empty())
        {
            int n=q.size();
            
            
            for(int i=0;i<n;i++)
            {
                Node *temp=q.front();
                q.pop();
                
                vi.push_back(temp->val);  
                for(int j=0;j<temp->children.size();j++)
                {
                    
                    q.push(temp->children[j]); 
                }
            }

            ans.push_back(vi);
            vi.clear();
            
            
        }
        
        return ans;
        
    }
};