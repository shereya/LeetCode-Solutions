//Happy Number
bool isHappy(int n){
    int n1;
    int s;
    while(n!=1&&n!=4)
    {
        n1=n;
        s=0;
        while(n1!=0)
        {
            s=s+(n1%10)*(n1%10);
            n1=n1/10;
        }
        n=s;
    }
    if(n==1){
        return true;
    }
    else{
        return false;
    }
}
