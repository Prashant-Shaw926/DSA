class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
        int l = 0, r = 0;

        if (n == 0)
            return true;
        else if (m == 1) {
            if (flowerbed[0] != 1) {
                flowerbed[0] = 1;
                n--;
            } else
                return false;
        }

        if (n == 0)
            return true;

        for (int i = 0; i < m; i++) {

            if (n == 0)
                return true;

            if (flowerbed[i] == 1)
                continue;

            else if (i == 0) {
                r = i + 1;
                if (flowerbed[r] == 0) {
                    flowerbed[i] = 1;
                    n--;
                }

            } else if (i == m - 1) {
                l = i - 1;
                if (flowerbed[l] == 0) {
                    flowerbed[i] = 1;
                    n--;
                }
            } else {
                l = i - 1;
                r = i + 1;
                if (l >= 0 && r < m) {
                    if (flowerbed[l] == 0 && flowerbed[r] == 0) {
                        flowerbed[i] = 1;
                        n--;
                    }
                }
            }
        }

        return n == 0 ? true : false;
    }
};