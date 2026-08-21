class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }

        long long windowSum = 0;
        int countWays = 0;
        for (int i = 0; i < n - 1; i++) {
            windowSum += nums[i];
            if (windowSum >= (totalSum - windowSum)) {
                countWays++;
            }
        }

        return countWays;
    }
};