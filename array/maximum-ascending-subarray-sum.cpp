class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int maxSum = 0;
        int sum = nums[0]; // sum = 10
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] >= nums[i]) { // 10 !> 20, 20 !> 30 || 30 > 5
                maxSum = max(maxSum, sum); //maxSum = max(0, 60) = 60
                sum = nums[i]; //sum = 5
            } else { 
                sum += nums[i]; //10 = 10+20, 30 = 30+30 = 65 ||  5 = 5+10, 15 = 15+50 = 65
            }
        }

        maxSum = max(maxSum, sum); // maxSum = max(60, 65)

        return maxSum; //65
    }
};