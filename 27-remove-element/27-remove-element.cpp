class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=nums.size()-1;
        int i=0;
        while(i<=l)
        {
            if(nums[i]==val)
            {
                swap(nums[i],nums[l]);
                l--;
                i--;
            }
            
            i++;
        }
        
        return l+1;
    }
};