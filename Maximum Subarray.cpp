//Maximum Subarray - Kadane's Algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int>v=nums;
        long long maxsum=INT_MIN;
        long long sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum=sum+v[i];
            if(sum>maxsum)
            {
                maxsum=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxsum;
    }
};
