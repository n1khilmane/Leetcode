class Solution {
public:
    bool isValid(string s) {
        
        stack<int> st;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            
            else{
                
                if(st.size()==0) return false;
                char ch = st.top();
                st.pop();
                if((s[i]==')' && ch == '(') || (s[i]=='}' && ch == '{') || (s[i]==']' && ch == '['))
                    continue;
                else return false;
            }
        }
        
        if(st.size()==0)
            return true;
        
        else
            return false;
            
        
        }
        
        
    
};