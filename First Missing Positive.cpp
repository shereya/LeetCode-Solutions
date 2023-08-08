//171/176 cases passed
//time limit exceeded error
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                nums[i]=0;
            }
        }
        int missingNum;
        if(count(nums.begin(),nums.end(),1)==0)
        {
            missingNum=1;
        }
        else if(count(nums.begin(),nums.end(),1)==1&&nums.size()==1)
        {
            missingNum=2;
        }
        else
        {
            int flag=0;
            for(int i=1;i<=*max_element(nums.begin(),nums.end());i++)
            {
                if(count(nums.begin(),nums.end(),i)==0)
                {
                    missingNum=i;
                    flag=1;
                    break;
                }
            }
            if (flag==0)
            {
                missingNum=*max_element(nums.begin(),nums.end())+1;
            }
        }
        return missingNum;
    }
};
