class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> range;
        int n = nums.size();
        if (n == 0)
            return range;

        int start = nums[0], prev = nums[0];
        for (int i = 1; i < n; i++) {
            if ((prev + 1) != nums[i]) {
                string startStr = to_string(start);
                string endStr = to_string(prev);
                if (start != prev) {
                    range.push_back(startStr + "->" + endStr);
                } else {
                    range.push_back(startStr);
                }
                start = nums[i];
            }
            prev = nums[i];
        }

        string startStr = to_string(start);
        string endStr = to_string(prev);
        if (start != prev) {
            range.push_back(startStr + "->" + endStr);
        } else {
            range.push_back(startStr);
        }

        return range;
    }
};