class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        int n=nums.size();
        int ans=0;
        int pivot;
        sort(nums.begin(),nums.end());
        if(n%2==0)
            pivot=(nums[n/2-1]+nums[n/2])/2;
        
        else
            pivot=nums[n/2];
        
        for(auto i:nums)
            ans+=abs(i-pivot);
        
        return ans;
        
    }
};