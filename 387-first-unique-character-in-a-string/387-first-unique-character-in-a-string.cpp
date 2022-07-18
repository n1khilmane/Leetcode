class Solution {
public:
    int firstUniqChar(string s) {
        
		unordered_map<char,int> ump;
		for(auto itr:s)
			ump[itr]++;

		for(int i=0;i<s.length();i++)
		{
			auto itr = ump.find(s[i]);
			if(itr->second==1)
				return i;
		}
		return -1;
    }
};