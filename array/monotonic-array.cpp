class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool isIncreasing = false;
        bool isDecresing = false;

        for (int i=1; i<n; i++) {
            if (nums[i] > nums[i-1]) {
                isIncreasing = true;
            }
            if(nums[i] < nums[i-1]){
                isDecresing = true;
            }

            if(isIncreasing && isDecresing){
                return false;
            }
        }

        return true;
    }
};