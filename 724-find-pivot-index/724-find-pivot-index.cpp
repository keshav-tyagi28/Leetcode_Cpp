class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       
        int tsum=0;
         for(int i=0;i<nums.size();i++)
            tsum=tsum+nums[i];
        
        
        int cur=0;
        for(int i=0;i<nums.size();i++)
        {
            int left=cur;
            cur+=nums[i];
            int next=tsum-cur;
            if(next==left)
                return i;
            
        }
        return -1;
    }
        
//         vector<pair<int,int>> ans;
//         int tsum=0;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             tsum=tsum+nums[i];
//         }
        
//         int p=0;
//         int n=tsum-nums[0];
//         cout<<n;
//         ans.push_back(make_pair(p,n));
        
     

        
//         for(int i=1;i<nums.size();i++)
//         {
//            int prev=ans[i-1].first+nums[i-1];
//            int next=tsum-prev-nums[i];
//             // cout<<prev<<" "<<next<<endl;
//           ans.push_back(make_pair(prev,next));
          
//         }
        
//         for(int i=0;i<ans.size();i++)
//         {
           
            
//             if(ans[i].first==ans[i].second)
//                 return i;
//         }
        
//         return -1;
//         }   
};