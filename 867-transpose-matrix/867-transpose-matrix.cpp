class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       
        if(matrix.size()!=matrix[0].size())
        {
            vector<vector<int>> ans(matrix[0].size(),vector<int> (matrix.size()));
            
            int i=0;
            int r=0,c=0,col=0;
            while(col<matrix[0].size())
            {
                for(int j=0;j<matrix.size();j++)
                {
                    ans[r][c]=matrix[j][i];
                    c++;
                }
                col++;
                i++;
                c=0;
                r++;
            }
            return ans;
            
        }        
        
        
        
        
     
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i;j<matrix[i].size();j++)
            {
                int tmp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=tmp;
                
            }
        }
        
        return matrix;
    
               

    }
};