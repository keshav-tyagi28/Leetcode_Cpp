class Solution {
public:
  int   helper(int m,int n,int i,int j, vector<vector<int>> & dp)
    {
        if(i==0 && j==0)
            return  1;
        
       
      if(i<0 || j < 0)
            return 0;
      
        if(dp[i][j]!=-1)
            return dp[i][j];

             
      int c=0; int d=0;

       
      c=helper(m,n,i-1,j,dp);
        d=helper(m,n,i,j-1,dp);

      
    dp[i][j]=c+d;
    return dp[i][j];
        
    }
        
    int uniquePaths(int m, int n) {
        
       // vector<vector<int>> dp(m,vector<int>(n,-1));
       //  int i,j;
       //  i=m-1;
       //  j=n-1;
       //  return helper(m,n,i,j,dp);
        
    vector<vector<int>> dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                
                if(i==0 && j==0) dp[i][j]=1;
                else
                {
                    int up=0;
                    int left=0;
                    if(i>0) up=dp[i-1][j];
                    if(j>0) left=dp[i][j-1];
                    dp[i][j]=up+left;
                }
            }
        }

        
        return dp[m-1][n-1];
        
        
    }
};