class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int minDistance = INT_MAX;

        for (int num : nums) {
            if (abs(num) < abs(minDistance) ||
                abs(num) == abs(minDistance) && num > minDistance) {
                minDistance = num;
            }
            // else if(abs(num) == abs(minDistance) && num > minDistance){
            //     minDistance = num;
            // }
        }

        return minDistance;
    }
};