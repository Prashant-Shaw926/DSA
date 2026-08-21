class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {

        long long totalGifts = 0;

        for(int i=0; i<k; i++){
            auto maxNumOfGifts = max_element(gifts.begin(), gifts.end());
            int maxNumOfGiftIdx = distance(gifts.begin(), maxNumOfGifts);
            int leaveBehind = (int)sqrt(*maxNumOfGifts);
            gifts[maxNumOfGiftIdx] = leaveBehind;
        }

        for(int num : gifts){
            totalGifts += num;
        }

        return totalGifts;
    }
};