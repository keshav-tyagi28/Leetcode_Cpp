class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int s=0;
        for(int i=0;i<grid.size();i++){
            
            for(int j=0;j<grid[0].size();j++)
                {
                
                if(grid[i][j]==1)
                {    s+=4;
                
                if(j-1>=0 && grid[i][j-1]==1)
                    s-=2;
                
                if(i-1>=0 && grid[i-1][j]==1)
                    s-=2;
                }
            
                }
            
            
        }
        
        return s;
    }
};