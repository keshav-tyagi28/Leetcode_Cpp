class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> m;
        int maxi=0;
        int sum=0;
        int i=0,j=0;
        while(j<nums.size())
        {
            if(m.size()==0 || m.find(nums[j])==m.end())
            {
                m[nums[j]]++;
                sum+=nums[j];
                j++;
            }
          
            else if( m.find(nums[j])!=m.end())
            {
                m.erase(nums[i]);
                maxi= max(sum,maxi);
                sum-=nums[i];
                i++; 
                
            }
            
            
        }
        if(sum>maxi)
            maxi=sum;
        return maxi;
    }
};