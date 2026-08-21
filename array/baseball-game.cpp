class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        stack<int> Stack;

        for (int i = 0; i < n; i++) {
            if (operations[i] == "+") {
                int first = Stack.top();
                Stack.pop();
                int second = Stack.top();
                Stack.push(first);
                Stack.push(first + second);
            } else if (operations[i] == "D") {
                int prevValue = Stack.top();
                Stack.push(prevValue * 2);
            } else if (operations[i] == "C") {
                Stack.pop();
            } else {
                Stack.push(stoi(operations[i]));
            }
        }

        // int m = Stack.size();
        // int ans = 0;
        // for (int j = 0; j < m; j++) {
        //     int value = Stack.top();
        //     Stack.pop();
        //     ans += value;
        // }

        int ans=0;
        while(!Stack.empty()){
            ans += Stack.top();
            Stack.pop();
        }

        return ans;
    }
};