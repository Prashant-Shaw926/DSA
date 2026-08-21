class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        stack<string> words;

        string str = "";
        for (char c : s) {
            if (c == ' ' && str != "") {
                words.push(str);
                str = "";
            } else if (c != ' ') {
                str += c;
            }
        }

        if (str != "") {
            words.push(str);
        }

        string ans = "";
        while (!words.empty()) {
            ans += words.top();
            words.pop();

            if (!words.empty())
                ans += " ";
        }

        return ans;
    }
};