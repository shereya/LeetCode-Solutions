class Solution {
    public String longestPalindrome(String s) {
        int n = s.length();
        int start=0;
        int end=1;
        int hi,low;
        for(int i=0;i<n;i++)
        {
            //odd substring
            hi = i+1;
            low = i-1;
            while(low>=0&&hi<n&&s.charAt(hi)==s.charAt(low))
            {
                if(hi-low+1>end)
                {
                    start = low;
                    end = hi-low+1;
                }
                low--;
                hi++;
            }
            //even substrings
            hi = i;
            low = i-1;
            while(low>=0&&hi<n&&s.charAt(hi)==s.charAt(low))
            {
                if(hi-low+1>end)
                {
                    start = low;
                    end = hi-low+1;
                }
                low--;
                hi++;
            }
        }
        String sub = s.substring(start,start+end);
        return sub;
    }
}
