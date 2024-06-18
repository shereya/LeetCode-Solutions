//used the concept of double recursion
class Solution
{
    public static String frec(String st,int n)
    {
        if(n==0)
        {
            return st;
        }
        st = srec(st,"",0);
        return frec(st,n-1);
    }
    public static String srec(String st,String s,int i)
    {
        if(i==st.length())
        {
            return s;
        }
        else
        {
            if(st.charAt(i)=='0')
            {
                s = s+"01";
            }
            else
            {
                s=s+"10";
            }
            return srec(st,s,i+1);
        }
    }
	public static void main(String[] args) {
		String s = frec("0",3);
		System.out.println(s);
		int k = 5;
		int n = (int)s.charAt(k-1)-48;
		System.out.println(n);
	}
}
