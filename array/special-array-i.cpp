class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return true;

        // for (int track = 0; track < n; track++) {
        //     if (track == 0) {
        //         if (nums[track] % 2 == 0 && nums[track + 1] % 2 != 0 ||
        //             nums[track] % 2 != 0 && nums[track + 1] % 2 == 0) {
        //             continue;
        //         } else {
        //             return false;
        //         }
        //     } else if (track == n - 1) {
        //         if (nums[track] % 2 == 0 && nums[track - 1] % 2 != 0 ||
        //             nums[track] % 2 != 0 && nums[track - 1] % 2 == 0) {
        //             continue;
        //         } else {
        //             return false;
        //         }
        //     } else {
        //         if (nums[track - 1] % 2 == 0 && nums[track + 1] % 2 == 0 ||
        //             nums[track - 1] % 2 != 0 && nums[track + 1] % 2 != 0) {
        //             continue;
        //         } else {
        //             return false;
        //         }
        //     }
        // }

        for (int track = 0; track < n; track++) {
            if (track == 0) {
                if (nums[track] % 2 == 0 && nums[track + 1] % 2 == 0 ||
                    nums[track] % 2 != 0 && nums[track + 1] % 2 != 0) {
                    return false;
                }
            } else if (track == n - 1) {
                if (nums[track] % 2 == 0 && nums[track - 1] % 2 == 0 ||
                    nums[track] % 2 != 0 && nums[track - 1] % 2 != 0) {
                    return false;
                }
            } else {
                if (nums[track - 1] % 2 == 0 && nums[track + 1] % 2 != 0 ||
                    nums[track - 1] % 2 != 0 && nums[track + 1] % 2 == 0) {
                    return false;
                }
            }
        }
        return true;
    }
};