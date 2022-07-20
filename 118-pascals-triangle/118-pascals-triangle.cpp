class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      
        vector<int>curr;
        vector<vector<int>> ans; 
        if(numRows==0)
            return ans;
      
        if(numRows==1){
        curr.push_back(1);
        ans.push_back(curr);
        return ans;}
          
        if(numRows==2){
         curr.push_back(1);
         ans.push_back(curr);
         curr.push_back(1);
        ans.push_back(curr);
            return ans;
           }
         curr.push_back(1);
         ans.push_back(curr);
         curr.push_back(1);
        ans.push_back(curr);
        vector<int> prev=curr;
        for(int i=2;i<numRows;i++)
        {  
            vector<int>n;
            n.push_back(1);
            for(int i=0;i<prev.size()-1;i++)
            {
                n.push_back(prev[i]+prev[i+1]);
            }
                          n.push_back(1);
                 ans.push_back(n);
            prev=n;
            
        }
return ans;
        
        
    }
};