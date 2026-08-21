class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freqMap; 

        for (int num : arr) {
            freqMap[num]++; 
        }

        set<int> occurrences;
        for (auto& pair : freqMap) {
            occurrences.insert(pair.second);
        }

        return freqMap.size() == occurrences.size() ? true : false;
    }
};