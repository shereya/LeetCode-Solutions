#include<stdio.h>
int p=0;
int returnsmall(int a[],int n)
{
    int smallest=a[p];
    for(int i=p+1;i<n;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    return smallest;
}
void leftrotation(int a[],int n)
{
    int temp=a[p];
    for(int i=p+1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    a[n-1]=temp;
}
long long countOperationsToEmptyArray(int* nums, int numsSize){
    int n=numsSize;
    long long c=0;
    while(p<n)
    {
        while(nums[p]!=returnsmall(nums,n))
        {
            leftrotation(nums,n);
            c=c+1;
        }
        p=p+1;
        c=c+1;
    }
    return c;
}
int main()
{
    int arr[100]={1,2,4,3};
    int n=4;
    printf("%lld",countOperationsToEmptyArray(arr,n));
}
