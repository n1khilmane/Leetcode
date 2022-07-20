class Solution {
public:
    int mySqrt(int x) {
    long long s=0, e=x, ans, mid;  
        
        
        while(s<=e){             
            mid=(s+e)/2;
            if(mid*mid==x) return mid;     
            else if(mid*mid<x){             
                s=mid+1;        //if 'mid' value encounterted gives lower result, we simply discard all the values lower than mid.
                ans=mid;        //an extra pointer 'ans' is maintained to keep track of only lowest 'mid' value. 
            }
            else e=mid-1;       //if 'mid' value encountered gives greater result, we simply discard all the values greater than mid. 
        }
        return ans;
    }
};