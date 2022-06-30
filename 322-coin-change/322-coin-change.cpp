class Solution {
public:
    

   int f(int ind,int tar,vector<int>& coins, vector<vector<int>>&dp) 
   {
       
       if(ind==0)
       {
           if(tar%coins[0]==0)
               return (tar/coins[0]);
          
           else
               return 1e9;
       }
       
       if(dp[ind][tar]!=-1)
            return dp[ind][tar];
       
       int ntake=0+f(ind-1,tar,coins,dp);
       
       int take=INT_MAX;
       if(coins[ind]<=tar)
           take=1+f(ind,tar-coins[ind],coins,dp);
       
       dp[ind][tar]= min(take,ntake);
       return dp[ind][tar];
       
       
   }
    
    
    
    
    
    
    
    
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        // vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        // int ans= f(n-1,amount,coins,dp);
        
        vector<vector<int>>dp(n,vector<int>(amount+1,1e9));
        
        for(int tar=0;tar<=amount;tar++)
        {
            if(tar%coins[0]==0)
                dp[0][tar]=tar/coins[0];
        }

        for(int ind=1;ind<n;ind++)
        {
            for(int tar=0;tar<=amount;tar++)
            {
                int ntake=0+dp[ind-1][tar];
       
               int take=INT_MAX;
               if(coins[ind]<=tar)
                   take=1+dp[ind][tar-coins[ind]];

               dp[ind][tar]= min(take,ntake);
               
                
            }
        }
        
        int ans= dp[n-1][amount];
        if(ans>=1e9)
            return -1;
        else
            return ans;
    
    }
};