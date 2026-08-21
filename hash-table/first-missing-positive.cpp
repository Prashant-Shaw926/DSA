class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        // if(nums.size() == 0){
        //     return 1;
        // }
        // long long maxElement = INT_MIN;

        // for (long long num : nums) {
        //     if (num > maxElement) {
        //         maxElement = num;
        //     }
        // }

        // unordered_map<long long, long long> freqMap;

        // for (long long num : nums) {
        //     freqMap[num]++;
        // }

        // long long minElement = INT_MAX;
        // for (long long i = 0; i <= maxElement+1; i++) {
        //     if (freqMap[i] == 0) {
        //         if(i != 0 && i < minElement){
        //             minElement = i;
        //         }
        //     }
        // }

        // return minElement == INT_MAX ? 1 : minElement;

        int n = nums.size();
        for (int i = 0; i < n; i++) {
            while (nums[i] > 0 && nums[i] <= n &&
                   nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        for (int j = 0; j < n; j++) {
            if (nums[j] != j + 1) {
                return j + 1;
            }
        }

        return n + 1;
    }
};