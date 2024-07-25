class Solution {
    public int f(int i,int j,int[][]a,int[][]dp)
    {
        if(i==0&&j==0&&a[i][j]==0)
        {
            return 1;
        }
        if(i==0&&j==0&&a[i][j]==1)
        {
            return 0;
        }
        if(i<0||j<0)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(a[i][j]==0)
        {
            int left = f(i-1,j,a,dp);
            int top = f(i,j-1,a,dp);
            return dp[i][j]=left+top;
        }
        return 0;
    }
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        int r = obstacleGrid.length;
        int c = obstacleGrid[0].length;
        int[][]dp = new int[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                dp[i][j]=-1;
            }
        }
        int path = f(r-1,c-1,obstacleGrid,dp);
        return path;
    }
}
