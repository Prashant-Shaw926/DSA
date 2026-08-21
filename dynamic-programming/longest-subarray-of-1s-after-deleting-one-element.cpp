class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 0;
        int count = 0, maxCount = 0;

        while (r < n) {
            if (nums[r] == 0) {
                count++;
            }
            while (count > 1) {
                if (nums[l] == 0) {
                    count--;
                }
                l++;
            }
            maxCount = max(maxCount, (r - l));
            r++;
        }

        return maxCount;
    }
};