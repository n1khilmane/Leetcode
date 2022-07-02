class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
//         map<int,int> mp;
//         map<int,int>::iterator itr;
//         int count = k;
        
//         for(int i=0;i<arr.size();i++)
//         {
//             mp[arr[i]]++;
//         }
        
//         for(itr=mp.begin();itr!=mp.end();itr++)
//         {
//             if(itr->second == 0)
//                 count--;
            
//             if(count==0)
//                 break;
//         }
        
//         return itr->first;
        
        int l=0, r=arr.size()-1;
        
        while(l<=r)
        {
            int mid= l + (r-l)/2;
            
            if( arr[mid] -1 - mid < k )
                l = mid+1;
            else
                r = mid-1;
        }
        
        return l+k;  
        
        
        
        
    }
};