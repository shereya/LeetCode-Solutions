//spiral matrix
#include<stdio.h>
void rotate(int mat[][100],int m,int n)
{
    int temp;
    int left=0;
    int right=n-1;
    int top=0;
    int bottom=m-1;
    while(left<=right&&top<=bottom)
    {
        temp=mat[top][left];
        for(int i=left+1;i<=right;i++)
        {
            mat[top][i-1]=mat[top][i];
        }
        mat[top][right]=mat[top+1][right];
        top++;
        for(int i=top+1;i<=bottom;i++)
        {
            mat[i-1][right]=mat[i][right];
        }
        mat[bottom][right]=mat[bottom][right-1];
        right--;
        if(top<=bottom)
        {
            for(int i=right-1;i>=left;i--)
            {
                mat[bottom][i+1]=mat[bottom][i];
            }
            mat[bottom][left]=mat[bottom-1][left];
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom-1;i>=top;i--)
            {
                mat[i+1][left]=mat[i][left];
            }
            mat[top][left]=temp;
            left++;
        }
    }
}
int main()
{
    int mat[100][100]={
        {1,2,3,4},
        {16,1,2,5},
        {15,8,3,6},
        {14,7,4,7},
        {13,6,5,8},
        {12,11,10,9}
    };
    for(int i=0;i<1;i++)
    {
        rotate(mat,6,4);
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
