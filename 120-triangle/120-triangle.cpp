class Solution {
public:
    
    int helper(int i,int j,int row,vector<vector<int>>& triangle, vector<vector<int>> &dp)
    {
     
        if(i==row-1)
            return triangle[i][j];
    
        if(dp[i][j]!=-1)
        return dp[i][j];
        
    int down=triangle[i][j]+helper(i+1,j,row,triangle,dp);
    
    int rightd=triangle[i][j]+helper(i+1,j+1,row,triangle,dp);
    
    dp[i][j]=min(down,rightd);
       
        return dp[i][j];
    
    }
    
    
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        
              int n = triangle.size();

       
//         if(n==1)
//             return triangle[0][0];
        
// 		vector<vector<int>>dp(n, vector<int>(n, -1));
//        return  helper(0,0,n,triangle,dp);
       
        		vector<vector<int>>dp(n, vector<int>(n, 0));

        vector<int> prev(n,0);
        for(int j=0;j<n;j++)
            prev[j]=triangle[n-1][j];
        
        for(int i=n-2;i>=0;i--)
        {
            vector<int> cur(n,0);
            
            for(int j=i;j>=0;j--)
            {
                int down=prev[j]+triangle[i][j];
                int dg= prev[j+1]+triangle[i][j];
                
                cur[j]=min(down,dg);
                
            }
            
            prev=cur;
            
        }
        return prev[0];
        
       
    }
};