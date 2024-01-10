class Solution {
    public int lengthOfLongestSubstring(String s) {
        int right;
	    int left=0;
	    int ans=Integer.MIN_VALUE;
	    HashMap<Character,Integer>hash=new HashMap<>();
	    for(right=0;right<s.length();right++)
	    {
	        char c=s.charAt(right);
	        if(!hash.containsKey(c))
	        {
	            hash.put(c,1);
	        }
	        else
	        {
	            ans=Math.max(ans,right-left);
	            while(s.charAt(left)!=c)
	            {
                    hash.remove(s.charAt(left));
	                left++;
	            }
	            left++;
                hash.put(c,1);
	        }
	    }
        ans=Math.max(ans,right-left);
        return ans;
    }
}
