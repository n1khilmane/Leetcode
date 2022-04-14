class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        
    unordered_map < int, int > mp;
  vector < int > ans;
    int n = arr.size();

  for (int i = 0; i < n; i++) {
    mp[arr[i]]++;
  }

  for (auto x: mp) {
    if (x.second > (n / 3))
      ans.push_back(x.first);
  }

  return ans;
        
    }
};