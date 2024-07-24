class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left = 0;
        int maxFruits = 0;
        unordered_map<int, int> basket;

        for (int right = 0; right < fruits.size(); ++right) {
            basket[fruits[right]]++;

            while (basket.size() > 2) {
                basket[fruits[left]]--;
                if (basket[fruits[left]] == 0) {
                    basket.erase(fruits[left]);
                }
                left++;
            }

            maxFruits = max(maxFruits, right - left + 1);
        }

        return maxFruits;
    }
};
