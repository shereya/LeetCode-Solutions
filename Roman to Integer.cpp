//TC - O(n)
//SC - O(1)
class Solution {
public:
    int romanToInt(string str) {
        map<char,int>romanMap;
        romanMap['I']=1;
        romanMap['V']=5;
        romanMap['X']=10;
        romanMap['L']=50;
        romanMap['C']=100;
        romanMap['D']=500;
        romanMap['M']=1000;
        int n=0;
        int len=str.length();
        int visited[15]={0};
        for(int i=1;i<len;i++)
        {
            if(romanMap[str[i-1]]>romanMap[str[i]]&&visited[i-1]==0)
            {
                n=n+romanMap[str[i-1]];
                visited[i-1]=1;
            }
            if(romanMap[str[i-1]]<romanMap[str[i]]&&visited[i-1]==0&&visited[i]==0)
            {
                n=n+(romanMap[str[i]]-romanMap[str[i-1]]);
                visited[i-1]=1;
                visited[i]=1;
            }
            if(romanMap[str[i-1]]==romanMap[str[i]]&&visited[i-1]==0&&visited[i]==0)
            {
                n=n+romanMap[str[i]]+romanMap[str[i-1]];
                visited[i-1]=1;
                visited[i]=1;
            }
        }
        for(int i=0;i<len;i++)
        {
            if(visited[i]==0)
            {
                n=n+romanMap[str[i]];
                visited[i]=1;
            }
        }
        return n;
    }
};
