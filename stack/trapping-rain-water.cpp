class Solution {
public:
    vector<int> getLeftMaxArray(vector<int>& height, int n) {
        vector<int> leftMax(n, 0);

        leftMax[0] = height[0];
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], height[i]);
        }

        return leftMax;
    }

    vector<int> getrightMaxArray(vector<int>& height, int n) {
        vector<int> rightMax(n, 0);

        rightMax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }

        return rightMax;
    }

    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;

        vector<int> leftMax = getLeftMaxArray(height, n);
        vector<int> rightMax = getrightMaxArray(height, n);

        for (int i = 0; i < n; i++) {
            ans += min(leftMax[i], rightMax[i]) - height[i];
        }

        return ans;
    }
};