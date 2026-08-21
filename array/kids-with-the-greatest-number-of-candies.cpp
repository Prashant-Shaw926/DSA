class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int sum = 0;
        bool max = false;
        for (int i = 0; i < candies.size(); i++) {
            sum = extraCandies + candies[i];
            for (int j = 0; j < candies.size(); j++) {
                if (sum >= candies[j]) {
                    max = true;
                } else {
                    max = false;
                    break;
                }
            }
            result.push_back(max);
        }
        return result;
    }
};