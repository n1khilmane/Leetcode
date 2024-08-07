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

        
        for(auto itr=ump1.begin();itr!=ump1.end();itr++)
        {
            if(ump2[itr->first]!=itr->second) return false;
        }
       
  
        return true;
        
    }
};