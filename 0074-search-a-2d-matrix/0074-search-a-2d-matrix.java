class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int i = 0;
        int j = matrix[i].length - 1;
        while (i < matrix.length && j >= 0) {
            if (matrix[i][j] == target) {
                return true;
            }
            if (target > matrix[i][j]) {
                ++i;
            } else {
                --j;
            }
        }
        return false;
    }
}