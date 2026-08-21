class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        vector<int> ans;
        vector<int> hash(nums.size() + 1, 0);
        for (int i : nums) {
            hash[i]++;
        }
        for (int j=1; j<hash.size(); j++) {
            if (hash[j] > 1) {
                ans.push_back(j);
                break;
            }
        }
        for (int z=1; z<hash.size(); z++) {
            if (hash[z] == 0) {
                ans.push_back(z);
                break;
            }
        }
        return ans;
    }
};