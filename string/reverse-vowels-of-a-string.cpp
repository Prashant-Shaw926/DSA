class Solution {
public:
    string reverseVowels(string s) {
        int l = 0, r = s.length() - 1;

        while (l < r) {
            char firstChar = tolower(s[l]);
            char secondChar = tolower(s[r]);
            if ((firstChar == 'a' || firstChar == 'e' || firstChar == 'i' ||
                 firstChar == 'o' || firstChar == 'u') &&
                (secondChar == 'a' || secondChar == 'e' || secondChar == 'i' ||
                 secondChar == 'o' || secondChar == 'u')) {
                swap(s[l], s[r]);
                l++;
                r--;
            } else if (firstChar == 'a' || firstChar == 'e' ||
                       firstChar == 'i' || firstChar == 'o' ||
                       firstChar == 'u') {
                r--;
            } else {
                l++;
            }
        }

        return s;
        // stack<char> vowelStack;
        // string ans = "";

        // for (char c : s) {
        //     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        //         c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        //         vowelStack.push(c);
        //     }
        // }

        // for (char c : s) {
        //     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        //         c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        //         ans += vowelStack.top();
        //         vowelStack.pop();
        //     } else {
        //         ans += c;
        //     }
        // }

        // return ans;
    }
};