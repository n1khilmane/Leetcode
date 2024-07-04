class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int j = 0;
        int i = 0;
        
        
        while(i<s.size())
        {
            
            if(j==g.size()) break;
            
            if(s[i]>=g[j])
            {
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return j;
        
    }
};