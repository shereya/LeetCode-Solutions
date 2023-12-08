class Solution {
public:
    void permutei(vector<int>&init,vector<vector<int>>&v,int l,int r)
    {
        if(l==r)
        {
            v.push_back(init);
            return;
        }
        for(int i=l;i<=r;i++)
        {
            swap(init[l],init[i]);
            permutei(init,v,l+1,r);
            swap(init[l],init[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        map<vector<int>,int>m;
        int l=0;
        int r=nums.size()-1;
        vector<vector<int>>v;
        permutei(nums,v,l,r);
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
        }
        vector<vector<int>>unique;
        for(int i=0;i<v.size();i++)
        {
            if(m[v[i]]!=0)
            {
                unique.push_back(v[i]);
                m[v[i]]=0;
            }
        }
        return unique;
    }
};
