//308/312 cases passed 
//TC - O(N^2)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v1) {
        //vector<int>v1={-1,0,1,2,-1,-4};
        vector<vector<int>>v;
        vector<vector<int>>v2;
        vector<int>temp;
        map<vector<int>,int>m;
        int a,b;
        int sum;
        for(int i=0;i<v1.size()-1;i++)
        {
            for(int j=i+1;j<v1.size();j++)
            {
                temp.push_back(i);
                temp.push_back(j);
                v.push_back(temp);
                temp={};
            }
        }
        for(int i=0;i<v.size();i++)
        {
            a=v[i][0];
            b=v[i][1];
            sum=0-(v1[a]+v1[b]);
            for(int j=0;j<v1.size();j++)
            {
                if(v1[j]==sum&&j!=a&&j!=b)
                {
                    temp.push_back(v1[a]);
                    temp.push_back(v1[b]);
                    temp.push_back(v1[j]);
                    v2.push_back(temp);
                    temp={};
                }
            }
        }
        for(int i=0;i<v2.size();i++)
        {
            sort(v2[i].begin(),v2[i].end());
        }
        for(int i=0;i<v2.size();i++)
        {
            m[v2[i]]++;
        }
        v.clear();
        for(int i=0;i<v2.size();i++)
        {
            if(m[v2[i]]!=0)
            {
                v.push_back(v2[i]);
                m[v2[i]]=0;
            }
        }
        return v;
    }
};
