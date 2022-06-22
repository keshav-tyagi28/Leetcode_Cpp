class Solution {
public:
    
    int helper(int i,int j,vector<vector<int>>& grid, vector<vector<int>>& dp)
    {
        if(i<0 || j<0)
            return 100000;
        
        if(i==0 && j==0)
            return grid[i][j];
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int left= grid[i][j]+helper(i,j-1,grid,dp);
        int up= grid[i][j]+helper(i-1,j,grid,dp);
    
        dp[i][j]= min(left,up);
        return dp[i][j];
    
    }
    
    
    
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
//         vector<vector<int>> dp(n,vector<int>(m,-1));
        
//         return helper(n-1,m-1,grid,dp);
        
         vector<vector<int>> dp(n,vector<int>(m,0));
            for(int i=0;i<n;i++)
            {
                
            for(int j=0;j<m;j++)
            {
                if(i==0 && j==0)
                    dp[i][j]=grid[i][j];
                
                else{
                    
                    int up=INT_MAX,left=INT_MAX;
                    
                    if(i>0) up= grid[i][j]+dp[i-1][j];
                    if(j>0) left=grid[i][j]+ dp[i][j-1];
                    
                    dp[i][j]=min(left,up);
                    
                    
                }
                
                
            }
            
            
            }

        return dp[n-1][m-1];
        
        
    }
};