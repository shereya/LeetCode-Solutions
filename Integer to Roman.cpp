class Solution {
public:
    string intToRoman(int num) {
        int n=num;
        string s;
        map<int,char>romanMap;
        romanMap[1]='I';
        romanMap[5]='V';
        romanMap[10]='X';
        romanMap[50]='L';
        romanMap[100]='C';
        romanMap[500]='D';
        romanMap[1000]='M';
        int q;
        /*map<int,char>::iterator it;
        for(it=romanMap.begin();it!=romanMap.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }*/
        if(n>=1000)
        {
            //cout<<(n/1000)*1000<<endl;
            for(int i=0;i<n/1000;i++)
            {
                s=s+romanMap[1000];
            }
            n=n%1000;
        }
        if(n>=100)
        {
            //cout<<(n/100)*100<<endl;
            q=n/100;
            if(q<=3)
            {
                for(int i=0;i<q;i++)
                {
                    s=s+romanMap[100];
                }
            }
            if(q==4)
            {
                s=s+romanMap[100]+romanMap[500];
            }
            if(q==5)
            {
                s=s+romanMap[500];
            }
            if(q>=6&&q<=8)
            {
                s=s+romanMap[500];
                for(int i=0;i<q-5;i++)
                {
                    s=s+romanMap[100];
                }
            }
            if(q==9)
            {
                s=s+romanMap[100]+romanMap[1000];
            }
            n=n%100;
        }
        if(n>=10)
        {
            q=n/10;
            if(q<=3)
            {
                for(int i=0;i<q;i++)
                {
                    s=s+romanMap[10];
                }
            }
            if(q==4)
            {
                s=s+romanMap[10]+romanMap[50];
            }
            if(q==5)
            {
                s=s+romanMap[50];
            }
            if(q>=6&&q<=8)
            {
                s=s+romanMap[50];
                for(int i=0;i<q-5;i++)
                {
                    s=s+romanMap[10];
                }
            }
            if(q==9)
            {
                s=s+romanMap[10]+romanMap[100];
            }
            n=n%10;
        }
        if(n!=0){
            //cout<<n<<endl;
            if(n<=3)
            {
                for(int i=0;i<n;i++)
                {
                    s=s+romanMap[1];
                }
            }
            if(n==4)
            {
                s=s+romanMap[1]+romanMap[5];
            }
            if(n==5)
            {
                s=s+romanMap[5];
            }
            if(n>=6&&n<=8)
            {
                s=s+romanMap[5];
                for(int i=0;i<n-5;i++)
                {
                    s=s+romanMap[1];
                }
            }
            if(n==9)
            {
                s=s+romanMap[1]+romanMap[10];
            }
        }
        return s;
    }
};
