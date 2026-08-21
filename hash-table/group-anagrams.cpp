class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        if (strs.size() == 0) {
            return ans;
        }
        unordered_map<string, vector<string>> ansMap;

        for (int i = 0; i < strs.size(); i++) {
            vector<int> freqMap(26, 0);
            string temp = "";
            for (int j = 0; j < strs[i].length(); j++) {
                freqMap[strs[i][j] - 'a']++;
            }
            for (int z = 0; z < freqMap.size(); z++) {
                if (freqMap[z] != 0) {
                    temp += (char)('a' + z);
                    temp += to_string(freqMap[z]);
                }
            }
            ansMap[temp].push_back(strs[i]);
        }

        for (const auto& i : ansMap) {
            ans.push_back(i.second);
        }

        return ans;
    }
};