class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
//         sort(stones.begin(),stones.end());
//         reverse(stones.begin(),stones.end());
        
  
        
//         for(int i=0;i<stones.size();i++)
//         {
//             j=i+1;
            
//             if(stones[i]!=stones[j]){
//                 int k = abs(stones[i]-stones[j]);
//                 stones.erase(stones.begin(),stones.begin()+1);
//                 stones.push_back(k);
//                 sort(stones.begin(),stones.end());
                
//             }
            
//             else{
                
//                 stones.erase(stones.begin(),stones.begin()+1);
                
//             }
            
//             if(stones.size()==1) return stones[i]
//         }
        
        
        priority_queue<int, vector<int>> pq;
        for(int i=0;i<stones.size();i++) {
            pq.push(stones[i]);
        }
        int x;int y;
        while(pq.size()>1) {
            y = pq.top(); pq.pop();
            x = pq.top(); pq.pop();
            if(y!=x) pq.push(y-x);
        }
        if(!pq.empty()) return pq.top();
        else return 0;
    }
        
    
};