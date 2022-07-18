class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        
        int i,j=0;
        for(auto it: magazine){
            if(it==ransomNote[j] && j<ransomNote.length()){
                j++;
            }
        }
 return j>=ransomNote.length() ? true : false;
    }
        
    
};