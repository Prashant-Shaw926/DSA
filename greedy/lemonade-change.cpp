class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> sale;

        for (int bill : bills) {
            if (bill == 5)
                sale[5]++;
            else if (bill == 10) {
                if (sale[5] == 0)
                    return false;
                sale[5]--;
                sale[10]++;
            } else {
                if (sale[5] > 0 && sale[10] > 0) {
                    sale[5]--;
                    sale[10]--;
                } else if (sale[5] >= 3) {
                    sale[5] -= 3;
                } else {
                    return false;
                }
            }
        }

        return true;
    }
};