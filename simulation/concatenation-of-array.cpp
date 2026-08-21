class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int m = 2 * n;
        cout << n;
        for (int i = 0; i < m; i++) {
            if (i < n) {
                ans.push_back(nums[i]);
            } else {
                ans.push_back(nums[i - n]);
            }
        }

        return ans;
    }
};