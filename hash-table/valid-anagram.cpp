class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freqMap;

        if (s.length() != t.length()) {
            return false;
        }

        for (char c : s) {
            freqMap[c]++;
        }

        for (char c : t) {
            freqMap[c]--;
            if (freqMap[c] < 0) {
                return false;
            }
        }

        return true;
    }
};