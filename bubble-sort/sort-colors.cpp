class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;
        for (int i : nums) {
            if (i == 0) {
                count0++;
            } else if (i == 1) {
                count1++;
            } else {
                count2++;
            }
        }

        for (int i = 0; i < count0; i++) {
            nums[i] = 0;
        }
        for (int j = count0; j < count0 + count1; j++) {
            nums[j] = 1;
        }
        for (int z = count0 + count1; z < count0 + count1 + count2; z++) {
            nums[z] = 2;
        }
    }
};