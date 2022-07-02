class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> Arr(n);
        if(n%2==0)
        {
            for(int i = 0; i<n-1; i = i + 2)
            {
                Arr[i] = (i+1);
                Arr[i+1] = -(i+1);
            }
        }
        else
        {
            for(int i = 0; i<n-1;i = i+2)
            {
                Arr[i] = i+1;
                Arr[i+1] = -(i+1);
            }
            Arr[n-1] = 0;
        }
        return Arr;
    }
        
    
};