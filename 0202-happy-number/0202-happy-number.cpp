class Solution {
public:
    int sqsum(int n)
    {
        int sum = 0;
        while(n){
            
            sum = sum + (n%10)*(n%10);
            n = n/10;
            
        }
        return sum;
    }
    
    bool isHappy(int n) {
        
        unordered_set<int> st;
        
        while(n!=1)
        {
            if(st.count(n) && !st.empty())
            {
                return false;
            }
            
            st.insert(n);
            n = sqsum(n);
        }
        return true;
        
    }
};