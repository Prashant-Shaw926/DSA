class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int x = 0, y = n - 1;
        int maxArea = 0;
        while (x < y) {
            int area = 0;
            area = (y - x) * min(height[x], height[y]);
            if(area > maxArea){
                maxArea = area;
            }
            if(height[x] < height[y]){
                x++;
            }else{
                y--;
            }
        }

        return maxArea;
    }
};