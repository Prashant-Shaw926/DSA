class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int prefixProd = 1, suffixProd = 1;
        int maxProd = INT_MIN;
        int left = 0, right = n - 1;

        while (left < n && right >= 0) {
            if (nums[left] != 0) {
                prefixProd *= nums[left];
                maxProd = max(maxProd, prefixProd);
            } else {
                prefixProd = 1;
                maxProd = max(maxProd, 0);
            }
            if (nums[right] != 0) {
                suffixProd *= nums[right];
                maxProd = max(maxProd, suffixProd);
            } else {
                suffixProd = 1;
                maxProd = max(maxProd, 0);
            }
            left++;
            right--;
        }
        return maxProd;
    }
};