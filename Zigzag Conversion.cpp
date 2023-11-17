//1157/1157 Test Cases Passed ^.^
class Solution {
public:
    string convert(string s, int rows) {
        if(rows==1)
        {
            return s;
        }
        else{
            string zigzag;
            int j;
            int o=(rows*2)-4;
            int e=2;
            int ind;
            for(int i=0;i<rows;i++)
            {
                if(i==0||i==rows-1)
                {
                    j=i;
                    while(j<=s.length()-1)
                    {
                        zigzag=zigzag+s[j];
                        j=j+(rows*2-2);
                    }
                    
                }
                else
                {
                    ind=1;
                    j=i;
                    while(j<=s.length()-1)
                    {
                        if(ind%2==1)
                        {
                            zigzag=zigzag+s[j];
                            j=j+o;
                            ind++;
                        }
                        else
                        {
                            zigzag=zigzag+s[j];
                            j=j+e;
                            ind++;
                        }
                    }
                    o=o-2;
                    e=e+2;
                }
            }
            return zigzag;
        }
    }
};
