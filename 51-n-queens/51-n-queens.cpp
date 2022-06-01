class Solution {
public:
    void addsol(vector<vector<string>> &ans, vector<vector<int>> &board,int n){
        
        vector<string> tmp;
        for(int i=0;i<n;i++)
        {
             string a="";
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==0)
                    a+='.';
                else
                    a+='Q';
            }
            tmp.push_back(a);
        }
        ans.push_back(tmp);
    }
    bool safe(int row,int col,vector<vector<int>> &board,int n)
    {
        int x=row;
        int y=col;
        
        //check left side
    while(y>=0)
    {
        if(board[x][y]==1)
            return false;
        
        y--;
    }
           x=row;
           y=col;
       //upper diagnol
        while(x>=0&&y>=0)
        {
             if(board[x][y]==1)
            return false;
            x--;
            y--;
        }
           x=row;
         y=col;
        //lower diagnol
        while(x<n&&y>=0)
        {
             if(board[x][y]==1)
            return false;
            x++;
            y--;
        }
        return true;
        
    }
    void helper(int col,int n,vector<vector<string>> &ans, vector<vector<int>> &board)
    {
        if(col==n)
        {
            addsol(ans,board,n);
            return ;
        }
        
        for(int i=0;i<n;i++)
        {
            if(safe(i,col,board,n)){
                board[i][col]=1;
                helper(col+1,n,ans,board);
                board[i][col]=0;
                
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
         
        vector<vector<string>> ans;
        vector<vector<int>> board(n,vector<int>(n,0));
         helper(0,n,ans,board);
        return ans;
    }
};