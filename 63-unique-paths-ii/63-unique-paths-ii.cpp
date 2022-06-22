class Solution {
public:
    
    int helper(int i,int j,vector<vector<int>>& obstacleGrid,vector<vector<int>> &dp)
    {
        
           
    if(i<0 || j<0)
        return 0;
    

    if(obstacleGrid[i][j]==1)
    return 0;

    if(i==0 && j==0)
        return 1;
    
    if(dp[i][j]!=-1)
        return dp[i][j];
        
    int up= helper(i-1,j,obstacleGrid,dp);
    int left= helper(i,j-1,obstacleGrid,dp);
        
    dp[i][j]= up+left;    
    return dp[i][j];
    
    }
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        
        return helper(n-1,m-1,obstacleGrid,dp);
        
        
//         //tabulation method
//          vector<vector<int>> dp(n,vector<int>(m,0));
        
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
                    
//                 if(obstacleGrid[i][j]==1)
//                     dp[i][j]=0;
                
//                 else if(i==0 && j==0)
//                         dp[i][j]=1;
                    
//                else
//                {int up=0,left=0;
//                 if(i>0) up= dp[i-1][j];
//                 if(j>0) left= dp[i][j-1];
            
//                 dp[i][j]=up+left;
//                }
            
//             }
//         }
//         return dp[n-1][m-1];
        
        
    }
};