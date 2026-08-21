class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityElement = nums[0], count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                majorityElement = nums[i];
                count++;
            } else if (nums[i] == majorityElement) {
                count++;
            } else {
                count--;
            }
        }
        return majorityElement;
    }
};