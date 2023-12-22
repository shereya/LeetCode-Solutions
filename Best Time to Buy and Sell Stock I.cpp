class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>dpmin;
        vector<int>dp;
        dpmin.push_back(prices[0]);
        for(int i=1;i<n;i++)
        {
            dpmin.push_back(min(dpmin[i-1],prices[i]));
        }
        dp.push_back(0);
        for(int i=1;i<n;i++)
        {
            dp.push_back(max(dp[i-1],prices[i]-dpmin[i]));
        }
        return dp[n-1];
    }
};
