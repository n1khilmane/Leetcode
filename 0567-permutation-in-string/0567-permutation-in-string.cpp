class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        if(n>m) return false;

        vector<int> counts1(26,0), countwindow(26,0);

        for(char c: s1)
        {
            counts1[c-'a']++;
        }

        for(int i=0;i<n;i++)
        {
            countwindow[s2[i]-'a']++;
        }

        if(counts1==countwindow) return true;

        for(int i=n;i<m;i++)
        {
            countwindow[s2[i]-'a']++;
            countwindow[s2[i-n]-'a']--;
            if(counts1==countwindow) return true;
        }

        return false;
        
    }
};