class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int breakPoint = -1;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                breakPoint = i;
                break;
            }
        }

        if (breakPoint == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        for (int j = n - 1; j > breakPoint; j--) {
            if (nums[j] > nums[breakPoint]) {
                swap(nums[breakPoint], nums[j]);
                break;
            }
        }

        reverse(nums.begin() + breakPoint + 1, nums.end());
    }
};