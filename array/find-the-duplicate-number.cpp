class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int l = 0, r = l + 1;
        while (l<r){
            if(nums[l] == nums[r]){
                return nums[l];
            }
            else{
                l++;
                r++;
            }
        }
        return 0;
    }
};