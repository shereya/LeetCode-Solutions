//all cases passed
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string s=digits;
        vector<string>stringComb;
        map<char,vector<string>>stringMap;
        stringMap['1']={""};
        stringMap['2']={"a","b","c"};
        stringMap['3']={"d","e","f"};
        stringMap['4']={"g","h","i"};
        stringMap['5']={"j","k","l"};
        stringMap['6']={"m","n","o"};
        stringMap['7']={"p","q","r","s"};
        stringMap['8']={"t","u","v"};
        stringMap['9']={"w","x","y","z"};
        if(s=="")
        {
            return {};
        }
        if(s.length()==1)
        {
            for(int i=0;i<stringMap[s[0]].size();i++)
            {
                stringComb.push_back(stringMap[s[0]][i]);
            }
            for(int i=0;i<stringComb.size();i++)
            {
                cout<<stringComb[i]<<endl;
            }
        }
        if(s.length()==2)
        {
            for(int i=0;i<stringMap[s[0]].size();i++)
            {
                for(int j=0;j<stringMap[s[1]].size();j++)
                {
                    stringComb.push_back(stringMap[s[0]][i]+stringMap[s[1]][j]);
                }
            }
        }
        if(s.length()==3)
        {
            vector<string>temp;
            for(int i=0;i<stringMap[s[0]].size();i++)
            {
                for(int j=0;j<stringMap[s[1]].size();j++)
                {
                    stringComb.push_back(stringMap[s[0]][i]+stringMap[s[1]][j]);
                }
            }
            for(int i=0;i<stringComb.size();i++)
            {
                for(int j=0;j<stringMap[s[2]].size();j++)
                {
                    temp.push_back(stringComb[i]+stringMap[s[2]][j]);
                }
            }
            stringComb=temp;
            for(int i=0;i<stringComb.size();i++)
            {
                cout<<stringComb[i]<<endl;
            }
        }
        if(s.length()==4)
        {
            vector<string>temp;
            for(int i=0;i<stringMap[s[0]].size();i++)
            {
                for(int j=0;j<stringMap[s[1]].size();j++)
                {
                    stringComb.push_back(stringMap[s[0]][i]+stringMap[s[1]][j]);
                }
            }
            for(int i=0;i<stringComb.size();i++)
            {
                for(int j=0;j<stringMap[s[2]].size();j++)
                {
                    temp.push_back(stringComb[i]+stringMap[s[2]][j]);
                }
            }
            stringComb=temp;
            vector<string>temp2;
            for(int i=0;i<stringComb.size();i++)
            {
                for(int j=0;j<stringMap[s[3]].size();j++)
                {
                    temp2.push_back(stringComb[i]+stringMap[s[3]][j]);
                }
            }
            stringComb=temp2;
        }
        return stringComb;
    }
};
