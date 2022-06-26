class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        int r=original.size();
       
          
        vector<vector<int>>ans(m,vector<int>(n));
        vector<vector<int>> vect;
             if(n*m != r)
             return vect;
            
            int x=0;
            int y=0;
        
  
        
                
        for(int i=0;i<r;i++)
        {
           if(y<n)
        {   
             ans[x][y]=original[i];
                        y++;
        }
            
                    
                    else{
                            x++;
                            y=0;

                     ans[x][y]=original[i];
                        y++;

                      }
                    
                
                
        
        
        }
        
        return ans;
        
   
        
    }
};