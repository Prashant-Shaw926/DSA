class Solution {
public:
    int xorOperation(int n, int start) {
        int xorResult = 0; // Initialize the result

        for (int i = 0; i < n; i++) {
            int num = start + 2 * i; // Calculate the element
            xorResult ^= num;        // Perform XOR
        }

        return xorResult;
    }
};