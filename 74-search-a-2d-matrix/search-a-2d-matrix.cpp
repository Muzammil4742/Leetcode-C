class Solution {
public:
    int binarySearchRow(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int low = 0;
        int high = rows - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (matrix[mid][0] <= target && target <= matrix[mid][cols - 1]) {
                return mid;
            }
            else if (matrix[mid][0] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return -1;
    }
    bool binarySearchElement(int rowIdx, vector<vector<int>>& matrix, int target) {
        int cols = matrix[0].size();

        int low = 0;
        int high = cols - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (matrix[rowIdx][mid] == target) return true;
            else if (matrix[rowIdx][mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty()) return false;

        int rowIdx = binarySearchRow(matrix, target);

        if (rowIdx == -1) return false;

        return binarySearchElement(rowIdx, matrix, target);
    }
};