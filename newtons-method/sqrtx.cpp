class Solution {
public:
    int mySqrt(int x) {
        if (x == 0)
            return 0; // Handle edge case

        double guess = x;
        double epsilon = 1e-6; // Define the accuracy level

        // Iterate until the guess is accurate enough
        while (abs(guess * guess - x) > epsilon) {
            guess = (guess + x / guess) / 2;
        }

        return (int)guess;
    }
};