class Solution {
public:
    int countOdds(int low, int high) {

        high = (high + 1) / 2;
        low = low / 2;
        return high - low;
        
        // int diff = (high - low) + 1;
        // if (diff % 2 == 0) {
        //     return diff / 2;
        // } else {
        //     if (low % 2 == 0) {
        //         return diff - ((diff / 2) + 1);
        //     } else {
        //         return (diff / 2) + 1;
        //     }
        // }
    }
};