class Solution {
public:
    
    
    int sqsum(int n){
        
        int sum=0;
        
        while(n>0){
            
            sum = sum + ((n%10)*(n%10));
            n = n/10;
            
        }
        return sum;
        
        
    }
    
    
    
    
    
    bool isHappy(int n) {
        
        int tmp = n;
        while(1){
            
            if(tmp==89)
                return false;
            
            if(tmp==1)
                return true;
            
            tmp = sqsum(tmp);
            
            
        }
        
    }
    
    
    
    
};