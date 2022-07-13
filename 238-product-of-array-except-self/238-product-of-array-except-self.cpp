class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
    int n=nums.size();
     vector<int> ans(n);
       
        if(n==0)
            return ans;
    int p=1;
    ans[0]=p;
    for(int i=1;i<nums.size();i++)
    {
        p*=nums[i-1];
        ans[i]=p;  
    }
        p=1;
        ans[n-1]*=p;

      for(int i=n-2;i>=0;i--)
        {
            p*=nums[i+1];
            ans[i]*=p;  
        }

        return ans;
        
    }
};