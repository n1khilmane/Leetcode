class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string ans = "";
        int p = word1.size();
        int q = word2.size();
        int n = max(p,q);

        for(int i=0;i<n;i++)
        {
            if(p)
            {
                ans = ans + word1[i];
                p--;
            }

            if(q)
            {
                ans = ans + word2[i];
                q--;
            }
        }
        return ans;


    }
};