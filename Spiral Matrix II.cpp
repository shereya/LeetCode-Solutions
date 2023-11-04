class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0;
        int right=n-1;
        int top=0;
        int bottom=n-1;
        int mat[20][20];
        int num=1;
        while(left<=right&&top<=bottom)
        {
            for(int i=left;i<=right;i++)
            {
                mat[top][i]=num;
                num++;
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                mat[i][right]=num;
                num++;
            }
            right--;
            for(int i=right;i>=left;i--)
            {
                mat[bottom][i]=num;
                num++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--)
            {
                mat[i][left]=num;
                num++;
            }
            left++;
        }
        vector<vector<int>>matrix;
        for(int i=0;i<n;i++)
        {
            vector<int>temp={};
            for(int j=0;j<n;j++)
            {
                temp.push_back(mat[i][j]);
            }
            matrix.push_back(temp);
        }
        return matrix;
    }
};
