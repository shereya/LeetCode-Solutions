#include<stdio.h>
#include<string.h>
int top = -1;
char stack[30000];
int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(char e)
{
    stack[++top]=e;
}
void pop()
{
    top=top-1;
}
int longestValidParentheses(char * s)
{
    int c=0;
    //char s[]=")()())";
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            push(s[i]);
        }
        if(s[i]==')'&&isEmpty()==0)
        {
            pop();
            c=c+1;
        }
    }
    c=c*2;
    return c;
}
int main()
{
    char s[30000];
    scanf("%s",s);
    printf("%d",longestValidParentheses(s));
}
