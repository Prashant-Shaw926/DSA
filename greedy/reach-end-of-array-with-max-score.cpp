class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        int x = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[x]) {
                ans += (long long)(i - x) * nums[x];
                x = i;
            }
        }
        ans += (long long)((n-1) - x) * nums[x];
        return ans;
    }
};