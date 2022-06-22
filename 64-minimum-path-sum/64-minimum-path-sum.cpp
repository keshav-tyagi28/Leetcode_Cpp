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
        vector<vector<int>> dp(n,vector<int>(m,-1));
        
        return helper(n-1,m-1,grid,dp);
    }
};