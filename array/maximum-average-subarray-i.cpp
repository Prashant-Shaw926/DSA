class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0;
        int windowSum = 0;

        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }
        int maxAvgSum = windowSum;

        for (int i = k; i < nums.size(); i++) {
            windowSum = windowSum + nums[i] - nums[i - k];
            if (windowSum > maxAvgSum) {
                maxAvgSum = windowSum;
            }
        }
        ans = static_cast<double>(maxAvgSum) / k;

        return ans;
    }
};