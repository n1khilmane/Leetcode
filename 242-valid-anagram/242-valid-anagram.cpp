class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) return false;
        unordered_map <char, int>s1, s2;
        for(auto ch : s) 
            s1[ch]++;
        
        for(auto ch : t)
            s2[ch]++;
        int flag = 1;
        for(auto x : s1) {
            if(x.second!=s2[x.first]) {
                flag = 0;
                break;
            }
        }
        if(flag) return true;
        return false;
    }
};