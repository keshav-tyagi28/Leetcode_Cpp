class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
      unordered_map<int,int> m;
        int count=0;
        int i=0;
        int n=nums.size();
        int sum=0;
       m[sum]=1;
        while(i<n)
        {
            sum+=nums[i];
            
          if(m.find(sum-k)!=m.end())
                    count+=m[sum-k];
            
            m[sum]++;
            
            i++;
        }
   
        return count;
    }
};