class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int doubleDigitSum = 0, singleDigitSum = 0;
        for (int i : nums) {
            if (i > 9) {
                doubleDigitSum += i;
            } else {
                singleDigitSum += i;
            }
        }
        return singleDigitSum != doubleDigitSum;
    }
};