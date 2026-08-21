class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> result;

        if (n == 0)
            return result;

        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[0] < b[0];
             });

        vector<int> temp = {intervals[0][0], intervals[0][1]};
        for (int i = 1; i < n; i++) {
            if (temp[1] >= intervals[i][0]) {
                temp = {temp[0], max(temp[1], intervals[i][1])};
            } else {
                result.push_back(temp);
                temp = {intervals[i][0], intervals[i][1]};
            }
        }
        result.push_back(temp);

        return result;
    }
};