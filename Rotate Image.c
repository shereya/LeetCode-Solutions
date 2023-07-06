/*Approach
1. Find the transpose of the matrix without using a new matrix, using temp variable
2. Reverse every row of the matrix
Time complexity:
O(n^2). Runtime = 3ms
Space complexity:
O(n^2). Memory Occupied - 6.2 MB*/
void rotate(int** matrix, int matrixSize, int* matrixColSize){
    int n = matrixSize;
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            temp=matrix[i][j];
            matrix[i][j]=matrix[i][n-1-j];
            matrix[i][n-1-j]=temp;
        }
    }

}
