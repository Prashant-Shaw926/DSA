class Solution {
public:
    char findTheDifference(string s, string t) {
        int firstString = 0;
        int secondString = 0;

        for (char c : s) {
            firstString += c;
        }
        for (char c : t) {
            secondString += c;
        }

        int temp = secondString - firstString;
        char ans = static_cast<char>(temp);
        
        return ans;
    }
};