class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return 0;
        }
        int firstIndex = -1, secondIndex = -1;
        long long firstElement;
        int i = 0, j = 1;

        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (nums[i] > nums[j] && firstIndex == -1) {
                    firstIndex = i;
                    firstElement= nums[i];
                    secondIndex = j;
                } else if ((nums[i] > nums[j] && firstIndex != -1) ||
                           firstElement > nums[j]) {
                    secondIndex = j;
                }
            }
        }

        if (firstIndex == -1) {
            return 0;
        }

        return (secondIndex - firstIndex) + 1;
    }
};