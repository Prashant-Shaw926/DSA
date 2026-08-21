class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int track = 1;
        int buy = prices[0], maxProfit = 0;

        while (track < n) {
            int sell = prices[track];
            if (buy > sell) {
                buy = sell;
            } else if (buy < sell) {
                maxProfit = max(maxProfit, sell - buy);
            }
            track++;
        }

        return maxProfit;
    }
};