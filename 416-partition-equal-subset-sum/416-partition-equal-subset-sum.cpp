class Solution {
public:
    bool f(int ind,int k,vector<int> &nums,vector<vector<int>>& dp){
        
        
        if(ind==0)
        {
            
        if(k==0)
            return true;
            
        else if(k==nums[0])
            return true;
            
        else
            return false;
        
        }
         
        if(dp[ind][k]!=-1)
        return dp[ind][k];
    
        bool nontake=f(ind-1,k,nums,dp);
      bool take= false;
    
    if(nums[ind]<=k)
       take=f(ind-1,k-nums[ind],nums,dp);
   
        
        dp[ind][k]= take|nontake;
       return  dp[ind][k];
        
        
        
        
        
        
    }
    bool canPartition(vector<int>& nums) {
        
        int sum=0;
        for(auto i:nums)
            sum+=i;
        
        if(sum%2!=0)
            return false;
            
            int k=sum/2;
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(k+1,-1));
       return f(n-1,sum/2,nums,dp);
        
        
    }
};