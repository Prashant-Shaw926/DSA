class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> hash;

        for (int num : nums) {
            hash[num]++;
        }

        vector<pair<int, int>> ansArray;
        for (auto h : hash) {
            ansArray.push_back(make_pair(h.first, h.second));
        };

        auto comp = [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second;
        };

        sort(ansArray.begin(), ansArray.end(), comp);

        for (int i = 0; i < k; i++) {
            ans.push_back(ansArray[i].first);
        };

        return ans;
    }
};