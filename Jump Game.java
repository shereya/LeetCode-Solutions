class Solution {
    public boolean f(int ind,int[]a,Boolean[]dp)
    {
        if(ind==a.length-1)
        {
            return true;
        }
        if(a[ind]==0)
        {
            return false;
        }
        if(dp[ind]!=null)
        {
            return dp[ind];
        }
        for(int i=ind+1;i<=ind+a[ind];i++)
        {
            if(f(i,a,dp))
            {
                dp[ind]=true;
                return true;
            }
        }
        dp[ind]=false;
        return dp[ind];
    }
    public boolean canJump(int[] nums) {
        int n = nums.length;
        Boolean[] dp = new Boolean[n];
        return f(0, nums, dp);
    }
}
