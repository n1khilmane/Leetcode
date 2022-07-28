class Solution 
{
public:
    vector<string> findRelativeRanks(vector<int>& score)
    {
        map<int,int,greater<int>>m;
        vector<string>ans(score.size());
        int position=1;
        for(int i=0;i<score.size();i++)
        {
            m[score[i]]=i;
        }
        for(auto it:m)
        {
            if(position==1)
            {
                ans[it.second]="Gold Medal";
            }
            else if(position==2)
            {
                ans[it.second]="Silver Medal";
            }
            else if(position==3)
            {
                ans[it.second]="Bronze Medal";
            }
            else
            {
                ans[it.second]=to_string(position);
            }
            position++;
        }
        return ans;
    }
};