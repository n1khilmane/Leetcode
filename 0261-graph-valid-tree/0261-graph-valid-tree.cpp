class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if (n == 0) return false;
        if (edges.size() != n - 1) return false;
        
        vector<vector<int>> adj(n);
        
        for (const auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        vector<int> vis(n, 0); 
        int count = 0; 
        
        if (!dfs(adj, vis, 0, -1, count)) return false; 
        
        return count == n;
    }
    
private:
    bool dfs(const vector<vector<int>>& adj, vector<int>& vis, int st, int parent, int& count) {
        vis[st] = 1;
        count++;
        
        for (auto it : adj[st]) {
            if (it == parent) continue; 
            if (vis[it] || !dfs(adj, vis, it, st, count)) return false;
        }
        return true;
    }
};
