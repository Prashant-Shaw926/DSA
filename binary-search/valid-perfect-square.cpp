class Solution {
public:
    bool isPerfectSquare(int num) {
        int value = pow(num, 0.5);
        if (value * value == num)
            return true;
        else
            return false;
    }
};