class Solution {
public:
    int myAtoi(string s) {
        
        int i=0;
        int n = s.size();
        
        while(s[i]==' ') i++;
        
        int sign=1;
        if(i<n && s[i] == '+' || s[i] == '-')
            sign = (s[i++]=='+') ? 1 : -1;
        
        int num = 0;
        while(i < n && s[i] >= '0' && s[i] <= '9'){
            
            
            if(num > INT_MAX/10 || (num == INT_MAX/10 && s[i] - '0' > 7)){
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            
           
            num = num * 10 + (s[i++] - '0');
        }
        
        
        return sign * num;
    }
};