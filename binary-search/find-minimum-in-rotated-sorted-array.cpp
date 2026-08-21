class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int minElement = INT_MAX;

        int l = 0, r = n - 1;

        while (l < r) {
            int mid = l + (r - l) / 2;
            if (nums[l] <= nums[mid]) {
                minElement = min(minElement, nums[l]);
                l = mid + 1;
            } else {
                minElement = min(minElement, nums[mid]);
                r = mid - 1;
            }
        }
        minElement = min(minElement, nums[l]);
        return minElement;
    }
};