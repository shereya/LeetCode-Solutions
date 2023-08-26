//88/99 cases passed - error -> time limit exceeded
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        //vector<int>nums={0,0,0};
        int n=nums.size();
        //int target=1;
        int mindiff=INT_MAX;
        int closest;
        int sum;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    sum=nums[i]+nums[j]+nums[k];
                    if(abs(target-sum)<abs(mindiff))
                    {
                        mindiff=target-sum;
                        closest=sum;
                    }
                    if(target-sum==0)
                    {
                        mindiff=0;
                        closest=target;
                        break;
                    }
                }
            }
        }
        //cout<<closest<<endl;
        return closest;
    }
};
