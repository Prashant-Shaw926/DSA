class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        vector<int> hash1(1001, 0);
        vector<int> hash2(1001, 0);
        vector<int> ans;

        for (int i : nums1) {
            hash1[i]++;
        }

        for (int i : nums2) {
            hash2[i]++;
        }
        int freq1 = 0, freq2 = 0, intersect = 0;
        for (int i = 0; i < 1001; i++) {
            freq1 = hash1[i];
            freq2 = hash2[i];
            intersect = 0;
            if (freq1 < freq2) {
                intersect = freq1;
            } else {
                intersect = freq2;
            }
            for (int j = 0; j < intersect; j++) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};