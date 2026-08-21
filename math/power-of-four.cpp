class Solution {
public:
    bool checkPowerOfFour(long long int i, int n) {
        if (i == n)
            return true;
        else if (i > n)
            return false;

        return checkPowerOfFour(i * 4, n);
    }
    bool isPowerOfFour(int n) {
        if (n <= 0)
            return false;
        return checkPowerOfFour(1, n);
    }
};