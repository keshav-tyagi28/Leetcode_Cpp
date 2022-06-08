class Solution {
public:
    
    void helper(string s,int index,vector<string> path, vector<vector<string>>& ans){
        
        if(index==s.size())
        {
            ans.push_back(path);
            return ;
        }        
        
       for(int i=index;i<s.size();i++)
       {
           if(ispalindrome(s,index,i))
           {
              
               path.push_back(s.substr(index,i-index+1));
               if(i==1 && index==0)
               {  cout<<index<<i;
                    cout<<path[0];
               }
                helper(s,i+1,path,ans);
               path.pop_back();   
           }
           
       }
        
        
    }

    bool ispalindrome(string s , int start,int end)
    {
        while(start<=end)
        {
            if(s[start]!=s[end])
                return false;
            start++;
            end--;
            
        }
    return true;
        
    }
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> ans;
        vector<string> path;
        helper(s,0,path,ans);
        
        return ans;
        
    }
};