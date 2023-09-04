//large number sets cannot be handled with this code 
//6/233 cases passed
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>permute(vector<int>&s,int l,int r, vector<vector<int>>&v)
{
    if(l==r)
    {
        v.push_back(s);
    }
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(s[i],s[l]);
            permute(s,l+1,r,v);
            swap(s[i],s[l]);
        }
    }
    return v;
}
int main()
{
    vector<int>s={2,2,7,5,4,3,2,2,1};
    vector<int>scopy=s;
    int index;
    sort(s.begin(),s.end());
    vector<vector<int>>v;
    v=permute(s,0,s.size()-1,v);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
       if(v[i]==scopy)
       {
           index=i;
       }
    }
    if(index==v.size()-1)
    {
        for(int i=0;i<v[0].size();i++)
        {
            cout<<v[0][i]<<" ";
        }
    }
    else
    {
        for(int i=0;i<v[index+1].size();i++)
        {
            cout<<v[index+1][i]<<" ";
        }
    }
}
