class Solution {
public:
    
    int f(int ind,vector<int>& prices,int buy, vector<vector<int>> &dp)
    {
        
        if(ind==prices.size())
                return 0;
        
        if(dp[ind][buy]!=-1)
            return dp[ind][buy];
        
        int profit=0;
        
        if(buy)
        profit= max(-prices[ind]+f(ind+1,prices,0,dp), 0+f(ind+1,prices,1,dp));
        
        else
        profit=max(prices[ind]+f(ind+1,prices,1,dp), 0+f(ind+1,prices,0,dp));
        
        dp[ind][buy] = profit;
        return dp[ind][buy];
    }
    
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return f(0,prices,1,dp);
        
//         vector<vector<int>> dp(n+1,vector<int>(2,0));

//         dp[n][0]=dp[n][1]=0;
        
//         for(int ind=n-1;ind>=0;ind--)
//         {
//             for(int buy=0;buy<2;buy++)
//             {
//                 int profit=0;

//                 if(buy)
//                 profit= max(-prices[ind]+dp[ind+1][0] , 0+dp[ind+1][1]);

//                 else
//                 profit=max(prices[ind]+dp[ind+1][1], 0+dp[ind+1][0]);

//                 dp[ind][buy] = profit;
//             }
//         }
        
//         return dp[0][1];
        
        
        
        
        
        
        
        
        
        
        
    }
};