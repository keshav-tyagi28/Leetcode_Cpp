class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]=i;
        
         for(int i=0;i<nums.size();i++)
            {
             
             int r=target-nums[i];
             if(m.find(r)!=m.end() && m[r]!=i)
             {
                  ans.push_back(m[r]);
                    ans.push_back(i);
                    return ans;
             }
         }
        return ans;}
                
        
        
        //one loop work
        
//          unordered_map<int,int> m;
//                 vector<int> ans;

//         for(int i=0;i<nums.size();i++)
//         {
//             if(m.find(target-nums[i])!=m.end())
//             {
//                 ans.push_back(i);
//                 ans.push_back(m[target-nums[i]]);
//                 return ans;
                
//             }
//             m[nums[i]]=i;
            
//         }
        
//         return ans;
        
        
//     }
        
};