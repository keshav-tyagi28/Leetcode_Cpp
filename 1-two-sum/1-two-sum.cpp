class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        

        
        
//         int e=nums.size()-1;
//         vector<int> ans;
        // unordered_map<int,int> m;
//         for(int i=0;i<=e;i++)
//             m[nums[i]]=i;

//         for(auto x:m)
//         {
//             int c=x.second;
//             for(int i=c+1;i<=e;i++)
//             {
//                 if(nums[i]+(x.first)==target)
//                 {
//                             ans.push_back(x.second);
//                              ans.push_back(i);
//                                  return ans;
//                  }
                
//             }
          
//         }
        
//         return ans;
//     }
        
         unordered_map<int,int> m;
                vector<int> ans;

        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                ans.push_back(i);
                ans.push_back(m[target-nums[i]]);
                return ans;
                
            }
            m[nums[i]]=i;
            
        }
        
        return ans;
        
        
    }
        
};