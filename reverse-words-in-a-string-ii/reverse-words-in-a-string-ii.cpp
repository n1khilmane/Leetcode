class Solution {
public:
    void reverseWords(vector<char>& s) {
        
        reverse(s.begin(),s.end());
        int n=s.size();
        int i=0;
        
        int j=i+1;
        
        
        while(i<n){
        
            while(j<n && s[j]!=' ')
                j++;
                
            reverse(s.begin()+i,s.begin()+j);

            j++;
            i=j;
        }
        
        
    }
};