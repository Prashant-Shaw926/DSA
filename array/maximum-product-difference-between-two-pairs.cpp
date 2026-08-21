class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        long long ans = 0, max1 = INT_MIN, max2 = INT_MIN, min1 = INT_MAX,
                  min2 = INT_MAX;
        for (int i : nums) {
            if (i > max1) {
                max2 = max1;
                max1 = i;
            } else if (i > max2) {
                max2 = i;
            }
            if (i < min1) {
                min2 = min1;
                min1 = i;
            } else if (i < min2) {
                min2 = i;
            }
        }
        ans = (max1 * max2) - (min1 * min2);
        return ans;
    }
};