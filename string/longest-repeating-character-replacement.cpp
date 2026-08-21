#include <algorithm>
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        vector<int> freqMap(26, 0);
        int maxFreq = 0, checkForReplace = 0, ans=0;
        int left = 0, right = 0;

        while (right < n) {
            freqMap[s[right] - 'A']++;
            maxFreq = max(maxFreq, freqMap[s[right] - 'A']);
            checkForReplace = (right - left + 1) - maxFreq;

            if (checkForReplace <= k) {
                ans = max(ans, (right - left + 1));
            } else {
                freqMap[s[left] - 'A']--;
                left++;
            }
            right++;
        }
        return ans;
    }
};