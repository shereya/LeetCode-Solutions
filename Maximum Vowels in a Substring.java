class Solution {
    public static boolean isVowel(char c)
    {
        int n = (int)c;
        if(n==97||n==101||n==105||n==111||n==117)
        {
            return true;
        }
        else if(n==65||n==69||n==73||n==79||n==85)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public int maxVowels(String s, int k) {
        int left=0;
		int right;
		int ans=Integer.MIN_VALUE;
		int count=0;
		int countVowel=0;
		for(right=0;right<s.length();right++)
		{
		    if(isVowel(s.charAt(right)))
		    {
		        countVowel++;
		    }
		    count++;
		    while(count>k)
		    {
		        if(isVowel(s.charAt(left)))
		        {
		            countVowel--;
		        }
		        left++;
		        count--;
		    }
		    ans=Math.max(ans,countVowel);
		}
		return ans;
	}
}
