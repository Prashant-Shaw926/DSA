class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // If even we check on right
        // If odd we check on left

        int n = nums.size();
        int l = 0, r = n - 1;
        while (l < r) {
            int m = (l + r) / 2;
            if (m % 2 == 0) {
                if (m < n - 1) {
                    if (nums[m] != nums[m + 1]) {
                        r = m;
                    } else {
                        l = m + 1;
                    }
                }
            } else {
                if (m > 0) {
                    if (nums[m] != nums[m - 1]) {
                        r = m;
                    } else {
                        l = m + 1;
                    }
                }
            }
        }

        return nums[l];
    }
};