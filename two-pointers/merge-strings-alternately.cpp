class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = word1.length();
        int m = word2.length();

        int left = 0, right = 0;
        while (left < n && right < m) {
            ans += word1[left];
            ans += word2[right];
            left++;
            right++;
        }

        while (left < n || right < m) {
            if (left < n)
                ans += word1[left++];
            if (right < m)
                ans += word2[right++];
        }

        // while (left < n) {
        //     ans += word1[left];
        //     left++;
        // }

        // while (right < m) {
        //     ans += word2[right];
        //     right++;
        // }

        return ans;
    }
};