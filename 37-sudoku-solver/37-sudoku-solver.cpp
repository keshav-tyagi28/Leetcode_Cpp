class Solution {
public:
    bool issafe(int r,int c,int val,vector<vector<char>>& board)
    {
        char ch=val+'0';
        for(int i=0;i<9;i++)
        {
            //row check
            if(board[r][i]==ch)
                return false;
            //column check
            if(board[i][c]==ch)
                return false;
            
            //3*3 check
            if(board[3*(r/3)+(i/3)][3*(c/3)+i%3]==ch)
                return false;
        }
        
        return true;
        
    }
    bool solve(vector<vector<char>>& board)
    {
        int n=board.size();
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                {
                    for(int k=1;k<=9;k++)
                    { 
                        if(issafe(i,j,k,board))
                        {
                            int el=k;
                            char c=el+'0';
                            board[i][j]=c;
                            bool ans=solve(board);
                            if(ans)
                                return true;
                            else
                                board[i][j]='.';
                        } 
                    }
                    
                    return false;
                }
            }
        }
        
        return true;
    }
    
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};