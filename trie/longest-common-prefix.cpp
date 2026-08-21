class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string temp;
        temp = strs[0];

        for (int z = 1; z < n; z++) {
            string track = "";
            for (int y = 0; y < strs[z].length() && y < temp.length(); y++) {
                if (temp[y] == strs[z][y]) {
                    track += strs[z][y];
                } else {
                    break;
                }
            }
            temp = track;
            if (temp == "")
                return temp;
        }
        return temp;
    }
};