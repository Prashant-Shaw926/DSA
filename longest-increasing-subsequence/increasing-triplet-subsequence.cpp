class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        int num1 = INT_MAX, num2 = INT_MAX;
        for (int num : nums) {
            int num3 = num;
            if (num3 <= num1) {
                num1 = num3; // num1 = 1;
            } else if (num3 <= num2) {
                num2 = num3; // num2 = 1;
            } else {
                return true;
            }
        }

        return false;

        // int n = nums.size();
        // int count = 1;
        // for (int i = 1; i <= n; i++) {
        //     if (count == 3)
        //         return true;
        //     if (nums[i] > nums[i - 1]) {
        //         count++;
        //     } else {
        //         count = 1;
        //     }
        // }

        // return false;
    }
};