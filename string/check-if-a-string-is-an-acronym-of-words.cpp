#include <string>
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        bool ans = true;
        if (s.length() == words.size()) {
            for (int i = 0; i < words.size(); i++) {
                if (words[i][0] != s[i]) {
                    ans = false;
                    break;
                }
            }
        } else {
            ans = false;
        }

        return ans;
    }
};