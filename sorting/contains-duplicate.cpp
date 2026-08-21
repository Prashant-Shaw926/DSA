#include <unordered_set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            ans.insert(nums[i]);
        }
        return ans.size() < nums.size() ? true : false;
    }
};