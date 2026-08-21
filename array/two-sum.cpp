#include <vector>
#include <unordered_map> // Required for using std::unordered_map
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Create an unordered_map to store numbers and their indices.
        // Key: the number itself
        // Value: the index of that number in the 'nums' array
        std::unordered_map<int, int> numMap;

        // Iterate through the input vector 'nums'
        for (int i = 0; i < nums.size(); ++i) {
            int currentNum = nums[i];
            // Calculate the complement needed: target - currentNum
            int complement = target - currentNum;

            // Check if the complement already exists in our map.
            // If it does, we've found the two numbers!
            if (numMap.count(complement)) {
                // Return the index of the complement (stored in the map)
                // and the current number's index (i).
                return {numMap[complement], i};
            }

            // If the complement is not found, add the current number and its index to the map.
            // This way, future numbers can find 'currentNum' as their complement.
            numMap[currentNum] = i;
        }

        // According to the problem statement, there will always be exactly one solution.
        // Therefore, this line should theoretically never be reached.
        // It's good practice to have a default return for functions returning a value,
        // though in LeetCode contexts for this problem, it's often omitted
        // or an empty vector is returned.
        return {}; // Return an empty vector if no solution is found (should not happen based on constraints)
    }
};