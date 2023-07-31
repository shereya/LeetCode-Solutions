//161/311 cases passed
//runtime error is the error
char * multiply(char * num1, char * num2){
    long long a=0;
    long long b=0;
    long long c;
    for(int i=0;i<strlen(num1);i++)
    {
        c=num1[i]-'0';
        a=a*10+c;
    }
    for(int i=0;i<strlen(num2);i++)
    {
        c=num2[i]-'0';
        b=b*10+c;
    }
    char* res = (char*)malloc(40000 * sizeof(char));
    long long r=a*b;
    sprintf(res,"%lld",r);
    return res;
}
