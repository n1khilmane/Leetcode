class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        unordered_map<char,int> mp;
        
        for(int i =0;i<order.size();i++)
        {
            mp[order[i]]=i;
        }
        
        for(int i =0;i<words.size()-1;i++)
        {
            
            string word1 = words[i];
            string word2 = words[i+1];
            
            int ptr1 = 0;
            int ptr2 = 0;
            
            while(ptr1<word1.size() && ptr2<word2.size() && word1[ptr1] == word2[ptr2] )
            {
                
                ptr1++;
                ptr2++;
                
            }
            
            if(ptr2==word2.size() && ptr1<word1.size())
                return false;
            
            if(ptr1<word1.size() && ptr2<word2.size())
            {
                
                if(mp[word1[ptr1]] > mp[word2[ptr2]]) return false;
                
            }
            
                        
            
        }
        
        return true;   
        
        
    }
};