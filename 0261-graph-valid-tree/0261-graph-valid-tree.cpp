class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if (n == 0) return false;
        if (edges.size() != n - 1) return false; // Check if number of edges is exactly n-1
        
        vector<vector<int>> adj(n);
        
        for (const auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        vector<int> vis(n, 0); // Initialize vis array to 0
        int count = 0; // Use a reference to count in DFS
        
        if (!dfs(adj, vis, 0, -1, count)) return false; // Start DFS from node 0
        
        return count == n; // Check if all nodes are visited
    }
    
private:
    bool dfs(const vector<vector<int>>& adj, vector<int>& vis, int st, int parent, int& count) {
        vis[st] = 1;
        count++;
        
        for (auto it : adj[st]) {
            if (it == parent) continue; // Skip the edge to the parent
            if (vis[it] || !dfs(adj, vis, it, st, count)) return false;
        }
        return true;
    }
};
