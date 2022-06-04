class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        vector<string> check;
        check.push_back("qwertyuiop");
        check.push_back("asdfghjkl");
        check.push_back("zxcvbnm");
         vector<string> ans;
        
        for(int i=0;i<words.size();i++)
        {
            int k=0;
            string ch=words[i];
           
            while(k<3)
            {
                
                int count=0;
                for(int j=0;j<ch.size();j++)
                {
                    
                     char c=tolower(ch[j]);
                    size_t found = check[k].find(c);
                    if(found !=string::npos)
                        count++;
                    else
                        break;
                    
                }
            
            
                
                if(count==ch.size())
                {
                    ans.push_back(words[i]);
                    break;
                }
            
                else
                    k++;
            }
            
        }
        
        return ans;
    }
};