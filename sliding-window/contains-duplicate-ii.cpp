class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> hash;

        for (int i = 0; i < n; i++) {
            if (hash.count(nums[i])) {
                if (abs(hash[nums[i]] - i) <= k) {
                    return true;
                } else {
                    hash[nums[i]] = i;
                }
            } else {
                hash[nums[i]] = i;
            }
        }
        return false;
    }
};