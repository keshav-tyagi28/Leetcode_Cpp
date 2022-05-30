class Solution {
public:
     void helper(vector<int> nums,int i, vector<vector<int>>&ans,vector<int> output){
        
        if(i>=nums.size())
        {
            ans.push_back(output);
            return ;
        }
        
           //inlcude i;
        output.push_back(nums[i]);
        helper(nums,i+1,ans,output);
        output.pop_back();
          
         //not include i;  
        
         while(i+1<nums.size() && nums[i]==nums[i+1])
          i++;
         
         helper(nums,i+1,ans,output);
      
        
   

    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      
        sort(nums.begin(),nums.end());
        
         vector<vector<int>>ans;
        vector<int> output;
        helper(nums,0,ans,output);
        return ans;
    }
};