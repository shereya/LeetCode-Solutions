 class Solution {
    public int f(int i, int j, int[][] dp, int[][] grid, int[][] cost) {
        if (i == grid.length - 1) {
            return grid[i][j];
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        int min = Integer.MAX_VALUE;
        for (int k = 0; k < grid[0].length; k++) 
        {
            min = Math.min(min, f(i + 1, k, dp, grid, cost) + grid[i][j] + cost[grid[i][j]][k]);
        }
        return dp[i][j] = min;
    }

    public int minPathCost(int[][] grid, int[][] moveCost) {
        int[][] dp = new int[grid.length][grid[0].length];
        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[0].length; j++) {
                dp[i][j] = -1;
            }
        }
        int minCost = Integer.MAX_VALUE;
        for (int j = 0; j < grid[0].length; j++) {
            minCost = Math.min(minCost, f(0, j, dp, grid, moveCost));
        }
        return minCost;
    }
}
