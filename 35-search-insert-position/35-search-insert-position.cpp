class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        if(nums.size()==0)
            return -1;
        int s=0;
        
        int e=nums.size()-1;
        while(s<=e)
        {
            
            int mid=(s+e)/2;
            
            
            if(nums[mid]==target)
                return mid;
            
            else if(s==e)
            {
                if(target>nums[s])
                    return s+1;
                else
                    return s;
                
            }
            
            else if(nums[mid]<target)
                s=mid+1;
            
            else
                e=mid-1;
            
        }
        return s;
        
    }
};