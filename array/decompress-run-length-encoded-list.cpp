class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector <int> ans;
        int track=0;
        for(int i=0; i<nums.size(); i++){
            if(i%2 == 0){
                track = i+1;
                for(int j=0; j<nums[i]; j++){
                    ans.push_back(nums[track]);
                }
                i = track;
            }
        }
        return ans;
    }
};