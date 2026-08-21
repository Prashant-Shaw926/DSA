class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> candies;

        for (int candy : candyType) {
            candies.insert(candy);
        }
        int m = candyType.size();
        int n = candies.size();

        if (m / 2 <= n) {
            return m / 2;
        }

        return n;
    }
};