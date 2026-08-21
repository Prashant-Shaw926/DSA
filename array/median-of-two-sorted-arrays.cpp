class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        vector<int> nums3(m + n, 0);
        int l = 0, r = 0, track = 0;

        while (l < m && r < n) {
            if (nums1[l] < nums2[r]) {
                nums3[track++] = nums1[l++];
            } else {
                nums3[track++] = nums2[r++];
            }
        }

        while (l < m) {
            nums3[track++] = nums1[l++];
        }

        while (r < n) {
            nums3[track++] = nums2[r++];
        }

        if ((m + n) % 2 == 0) {
            int index = (m + n) / 2;
            int index2 = index - 1;
            return (nums3[index] + nums3[index2]) / 2.0;
        } else {
            int index = (m + n) / 2;
            return nums3[index];
        }
    }
};