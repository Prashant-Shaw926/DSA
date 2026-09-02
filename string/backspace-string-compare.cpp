class Solution {
public:
    bool backspaceCompare(string s, string t) {

        int n = s.size(), m = t.size();
        int i = n - 1, j = m - 1, removeS = 0, removeT = 0;

        while (i >= 0 && j >= 0) {
            while (s[i] == '#') {
                removeS++;
                i--;
            }
            while (t[j] == '#') {
                removeT++;
                j--;
            }
            if (removeS != 0) {
                while (removeS > 0 && i > 0) {
                    if (s[i] == '#') {
                        removeS++;
                    } else {
                        removeS--;
                    }
                    i--;
                }
            }
            if (removeT != 0) {
                while (removeT > 0 && j > 0) {
                    if (t[j] == '#') {
                        removeT++;
                    } else {
                        removeT--;
                    }
                    j--;
                }
            }
            if (s[i] != t[j] && (s[i] != '#' && t[j] != '#')) {
                return false;
            } else {
                i--;
                j--;
            }
        }

        return true;
    }
};