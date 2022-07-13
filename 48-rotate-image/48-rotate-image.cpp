class Solution {
public:
    void reverse(vector<vector<int>>& matrix,int i,int m)
    {
        int k=m-1;
        for(int j=0;j<m/2;j++)
        {
            swap(matrix[i][j],matrix[i][k]);
            k--;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        
        
        //transpose and reverse
        int m=matrix[0].size();
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        
        for(int i=0;i<n;i++)
        {
            reverse(matrix,i,m);
        }
        
        
        
        
    }
};