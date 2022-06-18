class Solution {
public:
    int rob(vector<int>& nums) {
//         vector<int> dp(nums.size());
//         int n=nums.size();
//         dp[0]=nums[0];
//         for(int i=1;i<nums.size();i++)
//         {
//             int take= nums[i];
//             if(i>1)
//                 take+=dp[i-2];
            
//             int nontake=0+dp[i-1];
            
//             dp[i]=max(take,nontake);
//         }
//         return dp[n-1];
        
        // space optimize
         int prev=nums[0];
     int n=nums.size();
        int prev2=0;
     for(int i=1;i<n;i++)
    {
        int take=nums[i];
        if(i>1)
            take+=prev2;
        int nontake=0+prev;
        int cur=max(take,nontake);
        prev2=prev;
        prev=cur;
        
    }
    return prev;
    }
};