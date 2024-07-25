class Solution {
    public int f(int i, int j, int[][] grid, int[][] dp) {
        if (i == 0 && j == 0) {
            return grid[i][j];
        }
        if (i < 0 || j < 0) {
            return Integer.MAX_VALUE;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        } else {
            int left = f(i, j - 1, grid, dp);
            int up = f(i - 1, j, grid, dp);
            return dp[i][j] = grid[i][j] + Math.min(left, up);
        }
    }

    public int minPathSum(int[][] grid) {
        int rows = grid.length;
        int cols = grid[0].length;
        int[][] dp = new int[rows][cols];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                dp[i][j] = -1;
            }
        }

        return f(rows - 1, cols - 1, grid, dp);
    }
}
