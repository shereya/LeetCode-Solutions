//cyclic palindrome
//all test cases passed
#include<stdio.h>
#include<string.h>
void leftRotation(char*s,int n)
{
    char temp=s[0];
    for(int i=1;i<n;i++)
    {
        s[i-1]=s[i];
    }
    s[n-1]=temp;
}
void rightRotation(char *s,int n)
{
    char temp=s[n-1];
    for(int i=n-2;i>=0;i--)
    {
        s[i+1]=s[i];
    }
    s[0]=temp;
}
int checkPal(char *s,int n)
{
    char strrev[100];
    for(int i=0;i<n;i++)
    {
        strrev[i]=s[n-i-1];
    }
    strrev[n]='\0';
    if(strcmp(s,strrev)==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int p=0;p<t;p++)
    {
        int flagl=0;
        int flagr=0;
        char str[100];
        scanf("%s",str);
        char strleft[100];
        char strright[100];
        int n=strlen(str);
        if(checkPal(str,n)==1)
        {
            printf("%d\n",0);
        }
        else{
            int left=0;
            int right=0;
            strcpy(strleft,str);
            strcpy(strright,str);
            for(int i=0;i<n-1;i++)
            {
                leftRotation(strleft,n);
                left++;
                if(checkPal(strleft,n)==1)
                {
                    flagl=1;
                    break;
                }
            }
            for(int i=0;i<n-1;i++)
            {
                rightRotation(strright,n);
                right++;
                if(checkPal(strright,n)==1)
                {
                    flagr=1;
                    break;
                }
            }
            if(flagl==1||flagr==1)
            {
                if(left<right){
                    printf("%d\n",left);
                }
                else{
                    printf("%d\n",right);
                }
            }
            else
            {
                printf("%d\n",-1);
            }
        }
    }
}
