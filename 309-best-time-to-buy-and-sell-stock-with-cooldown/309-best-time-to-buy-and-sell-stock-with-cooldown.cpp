class Solution {
public:
     
    int f(int ind,vector<int>& prices,int buy, vector<vector<int>> &dp)
    {
        
        if(ind>=prices.size())
                return 0;
        
        if(dp[ind][buy]!=-1)
            return dp[ind][buy];
        
        int profit=0;
        
        if(buy)
        profit= max(-prices[ind]+f(ind+1,prices,0,dp), 0+f(ind+1,prices,1,dp));
        
        else
        profit=max(prices[ind]+f(ind+2,prices,1,dp), 0+f(ind+1,prices,0,dp));
        
        dp[ind][buy] = profit;
        return dp[ind][buy];
    }
    
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return f(0,prices,1,dp);
    }
};