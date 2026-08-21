class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return -1;

        long long maxVal = -1;

        unordered_map<long long, vector<long long>> freqMap;

        for (int i = 0; i < nums.size(); i++) {
            long long digitSum = 0;
            int num = nums[i];

            while (num != 0) {
                digitSum += num % 10;
                num /= 10;
            }

            freqMap[digitSum].push_back(nums[i]);
        }

        for (const auto& pair : freqMap) {
            int largest = 0, secondLargest = 0;
            if(pair.second.size() == 1){
                continue;
            }
            else if (pair.second.size() == 2) {
                largest = pair.second[0];
                secondLargest = pair.second[1];
            } else {
                for (long long num : pair.second) {
                    if (num > largest) {
                        secondLargest = largest;
                        largest = num;
                    } else if (num > secondLargest && num != largest) {
                        secondLargest = num;
                    }
                }
            }

            if (largest != 0 && secondLargest != 0) {
                maxVal = max(maxVal, (long long)(largest + secondLargest));
            }
        }

        return maxVal;
    }
};