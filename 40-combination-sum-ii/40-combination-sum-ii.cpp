class Solution {
public:
     void helper(vector<int> nums,int index,vector< vector<int> >&ans,vector<int> output,int target){
        
         if(target==0)
         {
              ans.push_back(output);
                return ;
         }
             
         
         if(index==nums.size())
         {
             if(target==0)         
                 ans.push_back(output);
            return ; 
         }
         
         
    for(int i=index;i<nums.size();i++)
    {
        if(i>index && nums[i]==nums[i-1]) continue;
        if(nums[i]>target) break;
        
         output.push_back(nums[i]);
        helper(nums,i+1,ans,output,target-nums[i]);
         output.pop_back();
        
    }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         
        vector<vector<int>>ans;
        vector<int> output;
         sort(candidates.begin(),candidates.end());
        helper(candidates,0,ans,output,target);
       
        return ans;
        
    }
};