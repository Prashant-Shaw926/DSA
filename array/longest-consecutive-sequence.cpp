class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        if (n == 0) {
            return 0;
        }

        int count = 1, ans = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            } else if (nums[i] == nums[i - 1] + 1) {
                count++;
            } else {
                ans = max(ans, count);
                count = 1;
            }
        }

        ans = max(ans, count);

        return ans;
    }
};