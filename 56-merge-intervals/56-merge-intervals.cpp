class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        
        vector<vector<int>> mergedIntervals;
        
        //check condition
        if(intervals.size()==0)
            return mergedIntervals;
        
        //sort the intervals
        sort(intervals.begin(),intervals.end());
        
        // create a temperory interval to store the interval we are iterating
        vector<int> tempInterval = intervals[0];

        
        //merge the intervals
        for(auto itr:intervals){
            
            if(itr[0] <= tempInterval[1])
            {
                tempInterval[1] = max(itr[1], tempInterval[1]);
            }
            
            else{
                
                mergedIntervals.push_back(tempInterval);
                tempInterval = itr;
                
            }
            
        }
        
        mergedIntervals.push_back(tempInterval);
        return mergedIntervals;
        
        
    }
};