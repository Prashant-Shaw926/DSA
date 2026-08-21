class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0, track = 0;

        for (int num : nums) {
            totalSum += num; //28
        }

        int leftSum = 0, rightSum = totalSum;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                rightSum -= nums[i]; // i=0, rightSum = 28 - 1 = 27;
            } else {
                leftSum += nums[i - 1]; // i=1, leftSum = 0 + 1;
                rightSum -= nums[i]; // rightSum = 27 - 7 = 20
            }

            if (leftSum == rightSum) // 1 != 27
                return i;
        }

        return -1;
    }
};