class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
     int count=0;
        
      sort(g.begin(),g.end());
              sort(s.begin(),s.end());  

        for(int i=0;i<g.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(s[j]>=g[i])
                {
                    count++;
                    s[j]=-1;
                    break;
                }
            }
        }
        
        return count;
//         sort(g.begin(), g.end());
//         sort(s.begin(), s.end());
        
//         int i = 0, j = 0, ans = 0;
        
//         while(i < g.size() && j < s.size()) {
//             if(g[i] <= s[j]) ans++, i++;
//             j++;
//         }
        
//         return ans;
        
        
    }
};