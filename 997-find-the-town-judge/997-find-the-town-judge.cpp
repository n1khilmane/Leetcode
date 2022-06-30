class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        
//         map<int,int> mp;
        
//         for(int i=0;i<trust.size();i++){
            
//             mp[trust[i][0]]++;
            
//         }
        
//         for(int i=1;i<=n;i++)
//         {
//             if(mp[i]==0)
//                 return i;
            
//         }
        
//         return -1;
        
        
        vector<int> indeg(n+1,0);
        vector<int> outdeg(n+1,0);
        
        for(int i =0;i<trust.size();i++)
        {
            outdeg[trust[i][0]]++;
            indeg[trust[i][1]]++;
        }
        
        for(int i=1;i<=n;i++)
        {
            if(indeg[i]==n-1 && outdeg[i]==0)
                return i;
        }
        
        return -1;
        
        
        
        
        
        
        
        
    }
};