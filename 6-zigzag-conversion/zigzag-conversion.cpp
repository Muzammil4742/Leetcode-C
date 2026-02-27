class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        int n = s.length();
        vector<vector<char>> grid(numRows, vector<char>(n, ' '));

        int i = 0; // index in string
        int col = 0;

        while (i < n) {
            // Step 1: go down
            for (int row = 0; row < numRows && i < n; row++) {
                grid[row][col] = s[i++];
            }
            col++;

            // Step 2: go diagonally up
            for (int row = numRows - 2; row > 0 && i < n; row--) {
                grid[row][col] = s[i++];
                col++;
            }
        }

        // Step 3: read row by row
        string result = "";
        for (int row = 0; row < numRows; row++) {
            for (int c = 0; c < n; c++) {
                if (grid[row][c] != ' ') {
                    result += grid[row][c];
                }
            }
        }

        return result;
    }
};