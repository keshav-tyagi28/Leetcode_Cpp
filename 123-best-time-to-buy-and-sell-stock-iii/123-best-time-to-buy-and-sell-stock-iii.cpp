class Solution {
public:
    int f(int ind,vector<int>& prices,int buy,  vector<vector<vector<int>>> &dp,int cap)
    {
        if(cap==0)
            return 0;
        
        if(ind==prices.size())
                return 0;
        
        if(dp[ind][buy][cap]!=-1)
            return dp[ind][buy][cap];
        
        int profit=0;
        
        if(buy)
        profit= max(-prices[ind]+f(ind+1,prices,0,dp,cap), 0+f(ind+1,prices,1,dp,cap));
        
        else
        profit=max(prices[ind]+f(ind+1,prices,1,dp,cap-1), 0+f(ind+1,prices,0,dp,cap));
        
        dp[ind][buy][cap] = profit;
        return dp[ind][buy][cap];
    }
    
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(3,-1))); 
        return f(0,prices,1,dp,2);
    }
};