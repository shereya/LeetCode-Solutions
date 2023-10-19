class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>triangle;
        if(numRows==1)
        {
            triangle.push_back({1});
            return triangle;
        }
        if(numRows==2)
        {
            triangle.push_back({1});
            triangle.push_back({1,1});
            return triangle;
        }
        else
        {
            triangle.push_back({1});
            triangle.push_back({1,1});
            int sum;
            for(int i=1;i<numRows-1;i++)
            {
                vector<int>temp;
                temp.push_back(1);
                for(int j=1;j<triangle[i].size();j++)
                {
                    sum=triangle[i][j-1]+triangle[i][j];
                    temp.push_back(sum);
                }
                temp.push_back(1);
                triangle.push_back(temp);
            }
            return triangle;
        }
    }
};
