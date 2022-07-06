class Solution {
public:
    
    int helper(int n,vector<int> &dp)
    {
         if(n==0)
            return 0;
        if(n==1)
            return 1;
        
       
        
        if(dp[n-1]==-1)
            dp[n-1]=helper(n-1,dp);
        
        if(dp[n-2]==-1)
            dp[n-2]=helper(n-2,dp);

        
        int ans= dp[n-1]+dp[n-2];
        
        dp[n]= ans;
        return dp[n];
        
    }
    
    int fib(int n) {
    
        
        vector<int> dp(n+1,-1);
        return helper(n,dp);
       
    }
};