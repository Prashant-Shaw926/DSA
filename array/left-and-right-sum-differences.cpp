class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector <int> answer;
        int leftSum=0, rightSum=0, difference=0;
        for(int i=0; i<nums.size(); i++){
            leftSum=0;
            rightSum=0;
            for(int j=i-1; j>=0; j--){
                leftSum = leftSum + nums[j];
            }
            for(int z=i+1; z<nums.size(); z++){
                rightSum = rightSum + nums[z];
            }
            difference = leftSum - rightSum;
            if(difference < 0){
                difference *= -1;
            }
            answer.push_back(difference);
        }
        return answer;
    }
};