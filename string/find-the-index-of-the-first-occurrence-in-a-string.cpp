class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.length();
        int m = haystack.length();

        if (n == 0)
            return 0;

        if (n > m)
            return -1;

        for (int l = 0; l <= m - n; l++) {
            int r = 0;
            while (r < n && haystack[l + r] == needle[r]) {
                r++;
            }
            if (r == n) {
                return l;
            }
        }

        return -1;
    }
};