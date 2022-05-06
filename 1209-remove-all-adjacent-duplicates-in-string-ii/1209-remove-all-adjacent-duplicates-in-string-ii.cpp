class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        stack< pair <char,int> > st;
        for(int i=0;i<s.size();i++)
        {
            
            if(st.size()==0 || st.top().first!=s[i])
            {
                // cout<<"pushing"<<s[i]<<" ";
                st.push(make_pair(s[i],1));
                  // st.push( {s[i],1} );  
               
            }
            
           else
            {
                pair<char,int> prev= st.top();
                st.pop();
                st.push(make_pair(s[i],prev.second+1));
            }
            
            if(st.top().second==k)
                st.pop();
            
        }
        
        string ans="";
       
        
        while(st.size()!=0)
        {
            pair<char,int> a= st.top();
                st.pop();
          
            while(a.second--)
            {
                ans+=a.first;
            }
        
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};