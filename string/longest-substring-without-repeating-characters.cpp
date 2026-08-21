class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        set<char> freqMap;
        int currLen=0, ans = 0;
        int left = 0, right = 0;

        while (right < n) {
            if (freqMap.find(s[right]) != freqMap.end()) {
                while (freqMap.find(s[right]) != freqMap.end()) {
                    freqMap.erase(s[left]);
                    left++;
                }
            }
            currLen = right - left + 1;
            ans = max(ans, currLen);
            freqMap.insert(s[right]);
            right++;
        }

        return ans;
    }
};