class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
         vector<int> ans;
        int n=matrix.size();
        int m=matrix[0].size();

        int total=0;
        int fr=0,lr=n-1,fc=0,lc=m-1;
        while(fr<=lr && fc<=lc)
        {

            //first row
            for(int i=fc;i<=lc;i++)
            {
                ans.push_back(matrix[fr][i]);
                total++;
            }
            fr++;
            cout<<total<<" ";
            
            //last column
            for(int i=fr;i<=lr;i++)
             {
                ans.push_back(matrix[i][lc]);
                total++; 
                
            }
            
            lc--;
            
             //last row
             if (fr<=lr){
            for(int i=lc;i>=fc;i--)
             {
                ans.push_back(matrix[lr][i]);
                total++; 
                       cout<<"yaha"<<" ";     

                 
            }
                  lr--;
             }
          
        
            //first column
            if(fc<=lc){
            for(int i=lr;i>=fr;i--)
             {
                ans.push_back(matrix[i][fc]);
                total++; 
                            

            }
            fc++;
            }
        cout<<total<<" ";
        
        }
        return ans;
    }
};