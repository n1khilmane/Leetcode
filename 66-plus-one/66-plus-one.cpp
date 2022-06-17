class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size() - 1;
        
        for(int i =n; i>=0; i--){
            
            //when the last digit is not 9
            if(digits[i]!=9){
                
                digits[i] = digits[i]+1;
                return digits;
                
            }
            
            //when last digit is 9
            else
                digits[i]=0;
            
        }
        
        //when all the digits are 9 
        digits.insert(digits.begin(),1);
        return digits;
        
        
        
    }
};