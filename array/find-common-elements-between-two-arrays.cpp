class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int count1 = 0, count2 = 0;
        int max1 = 0, max2 = 0;

        for (int num : nums1) {
            max1 = max(max1, num);
        }
        for (int num : nums2) {
            max2 = max(max2, num);
        }

        int s1 = max1 + 1, s2 = max2 + 1;
        vector<int> hash1(s1, 0), hash2(s2, 0);

        for (int num : nums1) {
            hash1[num]++;
        }

        for (int num : nums2) {
            hash2[num]++;
        }

        for (int num : nums1) {
            if (num < s2 && hash2[num] > 0) {
                count1++;
            }
        }

        for (int num : nums2) {
            if (num < s1 && hash1[num] > 0) {
                count2++;
            }
        }

        ans.push_back(count1);
        ans.push_back(count2);

        return ans;
    }
};
