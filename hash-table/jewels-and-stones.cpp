class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int> freqMap(256, 0);
        int ans = 0;

        for (char stone : stones) {
            freqMap[stone]++;
        }

        for (char jewel : jewels) {
            ans += freqMap[jewel];
        }

        return ans;
    }
};