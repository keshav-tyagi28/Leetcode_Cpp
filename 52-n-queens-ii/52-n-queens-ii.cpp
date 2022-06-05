class Solution {
public:
    
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
    void helper(int col,int n, int &count,vector<vector<int>> &board)
    {
        if(col==n)
        {
           count++;
            return ;
        }
        
        for(int i=0;i<n;i++)
        {
            if(safe(i,col,board,n)){
                board[i][col]=1;
                helper(col+1,n,count,board);
                board[i][col]=0;
                
            }
        }
        
    }
    
    
    
    int totalNQueens(int n) {
           vector<vector<int>> board(n,vector<int>(n,0));
        int count=0;
         helper(0,n,count,board);
        return count;
        
    }
};