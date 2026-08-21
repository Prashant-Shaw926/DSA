class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int track=0, max=0;
    int n = nums.size();
    for(int i=0; i<n; i++){
        if(nums[i] == 1){
            track++;
             if(track>max){
                max=track;
            }
        }
        else if(nums[i] == 0){
            track = 0;
        }
    }
    return max;
    }
};