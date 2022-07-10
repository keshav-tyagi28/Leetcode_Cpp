class Solution {
public:
    
    int f(vector<int>& cost,int ind,vector<int> &dp)
    {
        if(ind==0)
            return cost[0];
        if(ind==1)
            return cost[1];
        
        if(dp[ind]!=-1)
            return dp[ind];
        
        int c1= cost[ind]+f(cost,ind-1,dp);
        int c2= cost[ind]+f(cost,ind-2,dp);
        
        dp[ind]= min(c1,c2);
        return dp[ind];
        
    }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);

        return min(f(cost,n-1,dp),f(cost,n-2,dp));
        
        
//         vector<int> dp(n+1);
//         dp[0]=cost[0];
//         dp[1]=cost[1];

//         for(int i=2;i<n;i++)
//         {
//             dp[i]= cost[i]+ min(dp[i-1],dp[i-2]);
//         }
//         return min(dp[n-1],dp[n-2]);
    }
};