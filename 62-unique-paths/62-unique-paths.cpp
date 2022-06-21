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
        
       vector<vector<int>> dp(m,vector<int>(n,-1));
      
        int i,j;
        i=m-1;
        j=n-1;
        return helper(m,n,i,j,dp);
        
        
        
        
        
        
    }
};