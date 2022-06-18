class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size());
        int n=nums.size();
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int take= nums[i];
            if(i>1)
                take+=dp[i-2];
            
            int nontake=0+dp[i-1];
            
            dp[i]=max(take,nontake);
        }
        return dp[n-1];
    }
};