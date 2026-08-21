class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(); // row = 3

        for (int i = 0; i < n; i++) {         // i=0
            for (int j = i + 1; j < n; j++) { // j=0+1 = 1
                swap(matrix[i][j],
                     matrix[j][i]); // matrix[0][1] = matrix[1][0] -> 2 <-> 4
            }
        }

        for (int z = 0; z < n; z++) { // z=0
            reverse(
                matrix[z].begin(),
                matrix[z].end()); // matrix[z] = [1,4,7] -> reverse -> [7,4,1]
        }
    }
};