#include<bits/stdc++.h>
#include<algorithm>
class Solution {
public:
   
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
     
        {
            sort(intervals.begin(),intervals.end());
             vector<vector<int>> ans;
            
            if(intervals.size()==0)
            return ans;
            
            vector<int> tmp=intervals[0];
            
            for(int i=1;i<intervals.size();i++)
            {
                int f=intervals[i][0];
                if(f<=tmp[1])
                {
                    tmp[1]=max(intervals[i][1],tmp[1]);
                }
                else
                {
                    ans.push_back(tmp);
                    tmp=intervals[i];
                }
                
            }
        
        ans.push_back(tmp);
            return ans;
        
    }}
};