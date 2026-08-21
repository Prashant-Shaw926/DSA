class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;

        long long temp = 1;
        while (temp < n) {
            temp *= 2;
        }
        return temp == n;
    }
};