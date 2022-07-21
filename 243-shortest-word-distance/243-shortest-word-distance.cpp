class Solution {
public:
    
    int shortestDistance(vector<string>& words, string word1, string word2) {
        int w1=-1, w2=-1, n=words.size(), min_dist = INT_MAX;
        for(int i=0;i<n; i++){
            if(words[i] == word1) w1 = i;
            else if (words[i] == word2) w2 = i;
            if(w1!=-1 && w2!=-1) min_dist = min(min_dist, abs(w1-w2));
        }
        return min_dist;
    }
};