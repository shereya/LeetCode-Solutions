class Solution {
    public int findLengthOfLCIS(int[] a) {
        boolean flag=true;
		int left=0;
		int right=1;
		int ans=0;
		for(right=1;right<a.length;right++)
		{
		    if(a[right-1]>=a[right])
		    {
		        flag=false;
		    }
		    if(flag==false)
		    {
		        ans=Math.max(ans,right-left);
		        left=right;
		        flag=true;
		    }
		}
		ans=Math.max(ans,right-left);
        return ans;
    }
}
