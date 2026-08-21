class Solution {
public:
    bool checkIfPowerOfThree(long long int i, int n) {
        if (i == n)
            return true;
        else if (i > n)
            return false;

        return checkIfPowerOfThree(i * 3, n);
    }
    bool isPowerOfThree(int n) {
        if (n == 0)
            return false;
        return checkIfPowerOfThree(1, n);
    }
};