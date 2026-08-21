class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9;
        for (int row = 0; row < n; row++) {
            set<char> st;
            for (int col = 0; col < n; col++) {
                if (board[row][col] == '.')
                    continue;
                else if (st.find(board[row][col]) != st.end())
                    return false;
                else
                    st.insert(board[row][col]);
            }
        }

        for (int col = 0; col < n; col++) {
            set<char> st;
            for (int row = 0; row < n; row++) {
                if (board[row][col] == '.')
                    continue;
                else if (st.find(board[row][col]) != st.end())
                    return false;
                else
                    st.insert(board[row][col]);
            }
        }

        for (int boxRow = 0; boxRow < n; boxRow += 3) {
            for (int boxCol = 0; boxCol < n; boxCol += 3) {
                set<char> st;
                for (int row = boxRow; row < boxRow + 3; row++) {
                    for (int col = boxCol; col < boxCol + 3; col++) {
                        if (board[row][col] == '.')
                            continue;
                        else if (st.find(board[row][col]) != st.end())
                            return false;
                        else
                            st.insert(board[row][col]);
                    }
                }
            }
        }
        return true;
    }
};