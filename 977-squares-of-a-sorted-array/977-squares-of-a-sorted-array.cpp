class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
     int n=nums.size();
        vector<int> res(n);
        int left=0;
        int right=n-1;
        for(int i=n-1;i>=0;i--)
        {
            if(abs(nums[left])>abs(nums[right])) res[i]=nums[left]*nums[left++];
            else res[i]=nums[right]*nums[right--];
        }
        return res;
        
        
        
        
        
        
        
        
        // for(int i=0;i<nums.size();i++)
        // {
        //     int sq=nums[i]*nums[i];
        //     nums[i]=sq;
        // }
        // sort(nums.begin(),nums.end());
        // return nums;
    }
};