class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        
        unordered_map<char,int> chfreq;
        
        for(auto ch:chars) 
            chfreq[ch]++;
        
        bool flag = true;
        string count = "";
        
        for( auto str:words){
            
            flag=true;
            unordered_map<char,int> copyfreq;
            
            for(auto ch: str ){
                copyfreq[ch]++;
            }
            
            for(auto ch: str ) {
                
                if(copyfreq[ch] > chfreq[ch])
                    flag=false;
            }
            
            if(flag){
                
                count += str;
            }
            
        }
        
        return count.length();
        
        
    }
};