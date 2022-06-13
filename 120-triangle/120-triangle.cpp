class Solution {
public:
    
    int helper(int i,int j,int row,int sum,vector<vector<int>>& triangle, vector<vector<int>> &dp)
    {
     
        if(i==row-1)
            return triangle[i][j];
    
        if(dp[i][j]!=-1)
        return dp[i][j];
        
    int b=triangle[i][j]+helper(i+1,j,row,sum,triangle,dp);
    
    int br=triangle[i][j]+helper(i+1,j+1,row,sum,triangle,dp);
    
    dp[i][j]=min(b,br);
       
        return dp[i][j];
    
    }
    
    
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        
              int n = triangle.size();

       
        if(n==1)
            return triangle[0][0];
		vector<vector<int>>dp(n, vector<int>(n, -1));
       return  helper(0,0,n,0,triangle,dp);
       
       
    }
};