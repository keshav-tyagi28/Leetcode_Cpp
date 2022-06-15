class Solution {
public:
    static bool  sortlen(string a,string b)
    {
        return a.size()<b.size();}
    
    int longestStrChain(vector<string>& words) {
        int ans=0;
        
        unordered_map<string,int> m;
        sort(words.begin(),words.end(),sortlen);
    
        for(string word:words)
        {
            
            for(int i=0;i<word.size();i++)
            {
                
                string nword= word.substr(0,i)+word.substr(i+1);
                
                m[word]=max(m[word],m[nword]+1);
                
            }
            ans=max(ans,m[word]);
            
        }
    
    return ans;
    }
};