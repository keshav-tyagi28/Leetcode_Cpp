class Solution {
public:
    
    bool explore(vector<vector<char>>& board,int i,int j,int si,string word)
    {
            
        if(si==word.size())
            return true;

        
        if(i<0||j<0 || i>=board.size() || j>=board[0].size())
            return false;
        
       
        if(board[i][j]!=word[si])
            return false;
        
  
     
        
        
        char ch=board[i][j];
        board[i][j]='@';
        
        bool up=explore(board,i-1,j,si+1,word);
        bool down=explore(board,i+1,j,si+1,word);
        bool right=explore(board,i,j+1,si+1,word);
        bool left=explore(board,i,j-1,si+1,word);
        
        board[i][j]=ch;
        
        if(up || down || right ||left)
            return true;
        
        else
            return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
     
        int n=board.size();
        int m=board[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]!=word[0]) continue;
                
                bool ans=explore(board,i,j,0,word);
                if(ans)
                    return ans;
                
                
            }
        }
        return false;
        
    }
};