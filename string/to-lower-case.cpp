class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        int caseDiff = 32;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {   
                ans.push_back(s[i] + caseDiff);
            } else {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};