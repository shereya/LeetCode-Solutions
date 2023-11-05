class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<map<char,int>>freq;
        vector<vector<string>>grouped;
        unordered_map<string,int>flag;
        for(int i=0;i<strs.size();i++)
        {
            flag[strs[i]]=0;
        }
        for(int i=0;i<strs.size();i++)
        {
            map<char,int>m;
            for(int j=0;j<strs[i].size();j++)
            {
                m[strs[i][j]]++;
            }
            freq.push_back(m);
        }
        for(int i=0;i<strs.size();i++)
        {
            vector<string>temp;
            if(flag[strs[i]]==0)
            {
                flag[strs[i]]=1;
                temp.push_back(strs[i]);
                for(int j=i+1;j<strs.size();j++)
                {
                    if(freq[i]==freq[j])
                    {
                        temp.push_back(strs[j]);
                        flag[strs[j]]=1;
                    }
                }
                grouped.push_back(temp);
            }
        }
        return grouped;
    }
};
