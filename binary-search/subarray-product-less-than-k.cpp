class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = i + 1, count = 0;
        long long product = nums[0];
        while (i < j && j < n) {
            product *= nums[j];
            if (product < k) {
                count++;
                j++;
                if(j==n){
                    i++;
                    j=i+1;
                    product = nums[i];
                }
            } else {
                i++;
                j=i+1;
                product = nums[i];
            }
        }

        for(i=0; i<n; i++){
            if(nums[i]<k){
                count++;
            }
        }

        return count;
    }
};