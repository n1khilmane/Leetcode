class Solution {
public:
    int threeSumSmaller(vector<int>&A, int t) 
    {
        int n = A.size();
        sort(A.begin(),A.end());
        int count = 0;
        for(int i = 0; i < n - 2; i++)
        {
            int l = i + 1;
            int r = n - 1;
            while(l < r)
            {
                int sum = A[l] + A[r] + A[i];
                if(sum >= t)
                {
                    r--;
                }
                else if(sum < t)
                {
                    count += (r - l);
                    l++;
                }
            }
        }
        return count;
        
        
        
    }
};