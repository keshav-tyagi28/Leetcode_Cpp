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
        // vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(3,-1))); 
        // return f(0,prices,1,dp,2);
        
       vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,0))); 
  
        for(int ind = n-1; ind>=0; ind--){
        for(int buy = 0; buy<2; buy++){
            for(int cap=1; cap<=2; cap++){    // dont start from 0 as it is covered already also
                                            // there is cap-1 in if therefore runtiem error
                
                int profit=0;
                if(buy==0){// We can buy the stock
                    profit = max(0+dp[ind+1][0][cap], 
                                -prices[ind] + dp[ind+1][1][cap]);
                 }
    
                if(buy==1){// We can sell the stock
                    profit = max(0+dp[ind+1][1][cap],
                                prices[ind] + dp[ind+1][0][cap-1]); 
                    
                }
                                    dp[ind][buy][cap]=profit;

            }
        }
    }
        return dp[0][0][2];
        
        
//         vector<vector<int>> ahead(2,vector<int>(3,0));
//         vector<vector<int>> cur(2,vector<int>(3,0));

//           for(int ind = n-1; ind>=0; ind--){
//         for(int buy = 0; buy<2; buy++){
//             for(int cap=1; cap<=2; cap++){
                
//                 int profit=0;
//                 if(buy==0){// We can buy the stock
//                     profit = max(0+ahead[0][cap], 
//                                 -prices[ind] + ahead[1][cap]);
//                  }
    
//                 if(buy==1){// We can sell the stock
//                     profit = max(0+ahead[1][cap],
//                                 prices[ind] + ahead[0][cap-1]); 
                    
//                 }
//                                     cur[buy][cap]=profit;

//             }
//         }
          
//           ahead=cur;
//     }
    
//     return ahead[0][2];
          
        
    }
};