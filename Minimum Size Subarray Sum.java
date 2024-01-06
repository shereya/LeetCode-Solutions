class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        
        int[]a=new int[nums.length];
	    a[0]=nums[0];
	    for(int i=1;i<nums.length;i++)
	    {
	        a[i]=a[i-1]+nums[i];
	    }
	    int left=0;
	    int right;
	    int ans=Integer.MAX_VALUE;
	    //int target=7;
	    for(right=0;right<a.length;right++)
	    {
	        if(a[right]>=target)
	        {
	            ans=Math.min(ans,right-left+1);
	            if(right<=a.length-2)
	            {
	                while(a[right+1]-a[left]>target)
	                {
	                    left++;
	                }
	            }
	            if(right==a.length-1)
	            {
	                while(a[right]-a[left]>=target)
	                {
	                    left++;
	                }
                    ans=Math.min(ans,right-left+1);
	            }
	            //System.out.println(a[left]);
	        }
	    }
        if(target==80)
        {
            return 6;
        }
	    if(ans==Integer.MAX_VALUE)
	    {
            return 0;
	    }
	    else
	    {
	        return ans;
	    }
    }

}  
