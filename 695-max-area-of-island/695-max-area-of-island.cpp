class Solution {
public:
    int f(int i,int j,vector<vector<int>>& grid)
    {
        if(i>=grid.size() || j>=grid[0].size() || grid[i][j]==0 || i<0 || j<0 || grid[i][j]<=0)
            return 0;
        
        
        grid[i][j]=-1;
        
        int bottom=f(i+1,j,grid);
        int up=f(i-1,j,grid);
        int right=f(i,j+1,grid);
        int left=f(i,j-1,grid);

       
        
        return (1+ bottom+up+right+left);
        
        
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        int fans=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                if(grid[i][j]==1)
                    ans=f(i,j,grid);
                
                fans=max(fans,ans);
            }
        }
        
        return fans;
    }
};