class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        sort(nums.begin(),nums.end(),greater<int>());
        int fmax=0,smax=-1,tmax=-1;
        for(int i=1;i<nums.size();i++)
        {
            if(smax==-1 && nums[i]!=nums[fmax])
                 smax=i;
            
            else if(smax!=-1 && tmax==-1 && nums[i]!=nums[smax])
            {   tmax=i;
                break;
            }
            
        }
        
        if(tmax==-1)
            return nums[fmax];
        else
            return nums[tmax];
        
        // another approach was to sort the vector and remove the duplicate values using unique something
        // and then check size if<2 return nums[0] else nums[2];
        
    }
};