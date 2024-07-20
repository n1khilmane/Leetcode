class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;

        unordered_map<char,int> ump1;
        unordered_map<char,int> ump2;

        for(int i=0;i<s.size();i++)
        {
            ump1[s[i]]++;
            ump2[t[i]]++;
        }

       
        for(int i=0;i<ump1.size();i++)
        {
            if(ump1[i]!=ump2[i]) return false;
        }

        return true;
        
    }
};