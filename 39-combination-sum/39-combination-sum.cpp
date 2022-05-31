class Solution {
public:
     void helper(vector<int> nums,int i, vector<vector<int>>&ans,vector<int> output,int target){
        
         if(target==0)
         {
              ans.push_back(output);
                return ;
         }
             
         
         if(i==nums.size())
         {
             if(target==0)
                 ans.push_back(output);
             
            return ; 
         }
         
         
         //inlcude i;
         if(target>=nums[i]){
        output.push_back(nums[i]);
        helper(nums,i,ans,output,target-nums[i]);
         output.pop_back();
         }
           //not include i;        
        helper(nums,i+1,ans,output,target);
        
        
   

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int> output;
        helper(candidates,0,ans,output,target);
        return ans;
        
    }
};