class Solution {
public:
    int majorityElement(vector<int>& arr) {

        map<int,int>map;
        int m=arr.size()/2;
        int i,y;
        for ( i = 0; i < arr.size(); ++i)
            {
                if(map[arr[i]])
                    {
                        map[arr[i]]++;
                    }
                else
                    {
                        map[arr[i]]=1;
                    }
            }
        
        for(auto i:map)
            {
                if(i.second>m)
                y= i.first;
            }
        return y;
}
};
        
    