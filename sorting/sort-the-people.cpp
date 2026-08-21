class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int max = 0, maxIndex = 0;
        for (int i = 0; i < names.size(); i++) {
            max = 0;
            maxIndex = 0;
            for (int j = 0; j < heights.size(); j++) {
                if (heights[j] > max) {
                    max = heights[j];
                    maxIndex = j;
                }
            }
            names.push_back(names[maxIndex]);
            names.erase(names.begin() + maxIndex);
            heights.erase(heights.begin() + maxIndex);
        }
        return names;
    }
};