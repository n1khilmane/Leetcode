class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n = s1.size();
        int m = s2.size();
        vector<int> count(26,0);
        vector<int> counterwindow(26,0);
        
        if(n>m) return false;
        
        
        for(int i=0;i<n;i++)
        {
            count[s1[i]-'a']++;
        }
        
        for(int i=0;i<n;i++)
        {
            counterwindow[s2[i]-'a']++;
        }
        
        if(count==counterwindow) return true;
        
        for(int i=n;i<m;i++)
        {
            counterwindow[s2[i]-'a']++;
            counterwindow[s2[i-n]-'a']--;
            if(count==counterwindow) return true;
        }
        return false;
        
        
    }
};