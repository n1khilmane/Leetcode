class Solution {
public:
    string breakPalindrome(string s) {
        if(s.length() == 1) return "";
        string ans = s;
        for(int i=0;i<s.length();i++){
            if(s[i]>'a' && i!=s.length()/2){
                s[i] = 'a';
                break;
            }
        }
        if(s==ans){
            s[s.length()-1] = 'b';
        }
        return s;
    }
};