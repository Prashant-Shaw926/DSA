class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n, 0);

        stack<pair<int, int>> Stack;
        Stack.push({temperatures[0], 0});

        for (int i = 1; i < n; i++) {

            while (!Stack.empty() && temperatures[i] > Stack.top().first) {
                answer[Stack.top().second] = i - (Stack.top().second);
                Stack.pop();
            }

            Stack.push({temperatures[i], i});
        }

        return answer;
    }
};

// int n = temperatures.size();
// vector<int> answer(n, 0);

// stack<int> warm;
// int countDays = 1;
// for (int i = n - 1; i >= 0; i--) {
//     if (warm.empty()) {
//         warm.push(temperatures[i]); // 73
//         countDays = 1;
//     } else if (warm.top() > temperatures[i]) {
//         answer[i] = countDays;
//         warm.push(temperatures[i]);
//     } else {
//         while (!warm.empty() && warm.top() < temperatures[i]) {
//             warm.pop();
//             countDays++;
//         }
//         answer[i] = countDays;
//         warm.push(temperatures[i]);
//     }
// }

// for (int i = 0; i < n; i++) {
//     int countDays = 1;
//     for (int j = i + 1; j < n; j++) {
//         if (temperatures[j] > temperatures[i]) {
//             answer[i] = countDays;
//             countDays = 1;
//             break;
//         } else {
//             countDays++;
//         }
//     }
// }

// return answer;