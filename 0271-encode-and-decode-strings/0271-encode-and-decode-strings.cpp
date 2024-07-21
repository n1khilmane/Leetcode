class Codec {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        
        string res = "";
        
        for(int i=0;i<strs.size();i++)
        {
            string str = strs[i];
            res = res + to_string(str.size()) + '#' + str;
            
        }
        
        return res;
        
        
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        
        int i = 0;
        vector<string> ans;
        
        while(i<s.size())
        {
            int j = i;
            while(s[j]!='#')
            {
                j++;
            }
            int length = stoi(s.substr(i,j-i));
            string temp = s.substr(j+1,length);
            ans.push_back(temp);
            i = j + 1 + length;
            
        }
        
        return ans;
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));