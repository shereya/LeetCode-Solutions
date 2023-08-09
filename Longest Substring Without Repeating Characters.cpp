//823/987 testcases passed
//error: time limit exceeded
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
        {
            return 0;
        }
        vector<string> v;
        //string s = "bbbbbb";
        map<char,int>freqMap;
        for (int i = 0; i < s.length(); i++)
        { 
            string currentSubstring = "";
            for (int j=i;j<s.length();j++)
            {
                currentSubstring+=s[j];
                v.push_back(currentSubstring);
            }
        }
        string maxStr=v[0];
        for(int i=0;i<v.size();i++)
        {
            int count=0;
            //cout<<"String:"<<v[i]<<endl;
            freqMap=map<char,int>();
            for(int j=0;j<v[i].length();j++)
            {
                freqMap[v[i][j]]++;
            }
            map<char,int>::iterator it;
            for(it=freqMap.begin();it!=freqMap.end();it++)
            {
                //cout<<it->first<<" "<<it->second<<endl;
                if(it->second==1)
                {
                    count++;
                }
            }
            if(count==freqMap.size()&&v[i].length()>maxStr.length())
            {
                maxStr=v[i];   
            }
        }
        return maxStr.length();
    }
};
