//35/45 test cases passed, time limit exceeded
int medianChecker(int arr[],int n,int k)
{
    int med;
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    if(n%2==0)
    {
        med=arr[(n/2)-1];
    }
    else
    {
        med=arr[(n/2)];
    }
    if(med==k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int countSubarrays(int* nums, int numsSize, int k){
    int n=numsSize;
    int m=k;
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int arr[100000];
            int e=0;
            for(int k=i;k<j+1;k++)
            {
                arr[e]=nums[k];
                e++;
            }
            if(medianChecker(arr,e,m)==1)
            {
                c=c+1;
            }
        }
    }
    return c;
}
