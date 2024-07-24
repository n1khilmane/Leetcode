// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
//         priority_queue<pair<int,int>> pq;
        
//         vector<int> ans;
        
//         for(int i=0;i<k;i++)
//         {
//             pq.push({nums[i],i});
//         }
        
//         ans.push_back(pq.front().first);
        
//         for(int i=)
        
//     }
// };
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        
        // create a priority queue (Max Heap) of pair of int
        // first of the pair is the element of the array
        // and second is the index
        priority_queue<pair<int,int>> p;
        // create a vector to store the result
        vector<int>res;
        // add all the elements in the first window to the PQ
        for(int i = 0; i < k; i++)
            p.push({arr[i],i});
        // add the max element of first window to the res vector
        res.push_back(p.top().first);
        // start iteration from the second window
        for(int i = k; i < arr.size(); i++)
        {
            // add the element into the PQ
            p.push({arr[i],i});
            // remove all the elments which are not in the current window
            // current window is from [i-k+1 , i]
            while(!(p.top().second > i-k))
                p.pop();
            // add the max element in the PQ to the res
            res.push_back(p.top().first);
        }
        // return the result
        return res;
        
    }
};