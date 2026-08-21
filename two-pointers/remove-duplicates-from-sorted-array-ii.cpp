class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();

        if (n <= 2)
            return n;

        int i = 0;
        int j = 1;

        int temp = nums[0];
        int track = 1;

        while (j < n) {

            if (nums[j] == temp) {

                if (track < 2) {
                    i++;
                    nums[i] = nums[j];
                    track++;
                }

            } else {

                i++;
                nums[i] = nums[j];
                temp = nums[j];
                track = 1;
            }

            j++;
        }

        return i + 1;
    }
};