class Solution {
public:
    int reverse(int x) {

        string temp = to_string(x);
        int n = temp.length();

        int l = 0, r = n - 1;

        if (temp[0] == '-') {
            l++;
        }

        while (l < r) {
            swap(temp[l], temp[r]);
            l++;
            r--;
        }

        long long reversedNum  = stoll(temp);

        if(reversedNum < INT_MIN || reversedNum > INT_MAX){
            return 0;
        }

        return static_cast<int>(reversedNum);
    }
};