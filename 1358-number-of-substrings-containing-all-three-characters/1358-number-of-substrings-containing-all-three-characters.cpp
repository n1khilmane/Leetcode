class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> lastseen = {-1, -1, -1}; 
        int count = 0;
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            lastseen[s[i] - 'a'] = i; 
            
           
            if (lastseen[0] != -1 && lastseen[1] != -1 && lastseen[2] != -1) {
           
                int min_lastseen = min(lastseen[0], min(lastseen[1], lastseen[2]));
                count += min_lastseen + 1;
            }
        }
        
        return count;
    }
};
