//new method Hash Map used 
//55/57 cases passed
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<vector<int>,int>sumMap;
        vector<int>index;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                sumMap[{i,j}]=nums[i]+nums[j];
            }
        }
        map<vector<int>,int>::iterator it;
        for(it=sumMap.begin();it!=sumMap.end();it++)
        {
            if(it->second==target)
            {
                index.insert(index.end(),it->first[0]);
                index.insert(index.end(),it->first[1]);
                break;
            }
        }
        return index;
    }
};
