class Solution {
public:
    bool isPalindrome(int x) {
        long long revNum = 0;
        int track = x;
        while (x > 0) {
            int lastDigit = x % 10;
            revNum = revNum * 10 + lastDigit;
            x = x / 10;
        }
        return revNum == track;
    }
};