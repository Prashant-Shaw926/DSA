class Solution {
public:
    double average(vector<int>& salary) {
        double avg = 0;
        auto minSalary = *min_element(salary.begin(), salary.end());
        auto maxSalary = *max_element(salary.begin(), salary.end());

        int avgLen = 0;
        for (int amt : salary) {
            if (amt != minSalary && amt != maxSalary) {
                avg += amt;
                avgLen++;
            }
        }

        return avg / avgLen;
    }
};