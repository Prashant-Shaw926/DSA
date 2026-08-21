class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum = 0, max = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] > max) {
                max = nums[j];
            }
        }
        for (int i = 0; i < k; i++) {
            sum += max;
            max++;
        }
        return sum;
    }
};