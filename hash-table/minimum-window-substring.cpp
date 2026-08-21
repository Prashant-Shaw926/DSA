class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();

        unordered_map<char, int> freqMap;
        for (char c : t) {
            freqMap[c]++;
        }

        int left = 0, right = 0;
        int count = 0, minLen = INT_MAX, sIndex = -1;
        int reqLen = t.length();
        string ans = "";

        while (right < n) {
            if (freqMap[s[right]] > 0) {
                count++;
                freqMap[s[right]]--;
                while (count == reqLen) {
                    if (minLen > right - left + 1) {
                        minLen = right - left + 1;
                        sIndex = left;
                    }
                    freqMap[s[left]]++;
                    if (freqMap[s[left]] > 0) {
                        count--;
                    }
                    left++;
                }
            } else {
                freqMap[s[right]]--;
            }
            right++;
        }
        if (sIndex == -1)
            return "";

        return s.substr(sIndex, minLen);
    }
};