class Solution {
public:
    
    int solve(vector<int>& nums)
    {
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
    
    int rob(vector<int>& nums) {
        
        if(nums.size()==1)
            return nums[0];
        
        int n=nums.size();
        vector<int> first;
        vector<int> second;

        for(int i=0;i<n;i++)
        {
                
            if(i!=0)
                first.push_back(nums[i]);
            
            if(i!=n-1)
                second.push_back(nums[i]);
        
        }
        
        int ans= max(solve(first),solve(second));
        return ans;
        
    }
};