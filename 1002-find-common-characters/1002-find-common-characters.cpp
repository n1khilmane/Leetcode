class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
    int n = words.size();
    
    unordered_map<char,pair<int,int>> a;
    vector<string> ans;
    
    for(char x:words[0])
       a[x].second++;
    
    
   for(int i=1;i<n;i++)
   {
      
         for(char x:words[i])
          a[x].first++;
      
       
       for(auto it= a.begin() ; it != a.end();it++)
       {
         it->second.second = min(it->second.first,it->second.second);
         it->second.first =0;
       }
         
   }
    
    
   for(auto i:a)
   {
       int y = i.second.second; 
       string s;
       s.push_back(i.first);
       
       // insertion in array 
       while(y--)
       ans.push_back(s);
    
   }
    
    return ans;
}
    
  
        
        
    
};