class Solution {
public:
    bool isValid(string s) {
        stack<char> order;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if (order.empty()) {
                    return false;
                }
                char var;
                if (s[i] == ')') {
                    var = order.top();
                    order.pop();
                    if (var != '(') {
                        return false;
                    }
                } else if (s[i] == '}') {
                    var = order.top();
                    order.pop();
                    if (var != '{') {
                        return false;
                    }
                } else {
                    var = order.top();
                    order.pop();
                    if (var != '[') {
                        return false;
                    }
                }
            } else {
                order.push(s[i]);
            }
        }
        return order.empty();
    }
};