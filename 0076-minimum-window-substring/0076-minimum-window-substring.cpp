class Solution {
public:
    std::string minWindow(std::string s, std::string t) {
        if (t.length() > s.length()) return "";
        std::unordered_map<char, int> map;
        for (char c : t) {
            map[c]++;
        }
        int counter = map.size();
        
        int begin = 0, end = 0;
        int head = 0;
        int len = INT_MAX;
        
        while (end < s.length()) {
            char c = s[end];
            if (map.count(c)) {
                map[c]--;
                if (map[c] == 0) counter--;
            }
            end++;
            
            while (counter == 0) {
                char tempc = s[begin];
                if (map.count(tempc)) {
                    map[tempc]++;
                    if (map[tempc] > 0) {
                        counter++;
                    }
                }
                if (end - begin < len) {
                    len = end - begin;
                    head = begin;
                }
                begin++;
            }
        }
        return len == INT_MAX ? "" : s.substr(head, len);
    }
};
