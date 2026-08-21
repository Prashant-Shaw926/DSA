class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0, n = nums.size();
        if (n == 0) {
            return nums;
        }

        for (i = 0; i < n; i++) {
            nums[i] *= nums[i];
        }

        i = 0;
        vector<int> result(n);
        int j = n - 1, temp = n - 1;
        while (i <= j) {
            if (nums[i] >= nums[j]) {
                result[temp] = nums[i];
                i++;
            } else if (nums[i] < nums[j]) {
                result[temp] = nums[j];
                j--;
            }
            temp--;
        }

        return result;
    }
};
