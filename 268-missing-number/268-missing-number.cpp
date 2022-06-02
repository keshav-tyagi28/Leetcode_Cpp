class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
//         unordered_map<int,int> m;
//         for(int i=0;i<nums.size();i++)
//         {
//            m[nums[i]]++;
//         }
        
//         for(int i=0;i<=nums.size();i++)
//         {
//             if(m.find(i)==m.end())
//                 return i;
//         }
        
//         return -1;
        
        
        int sum=0,arrsum=0;
            for(int i=0;i<=nums.size();i++)
            sum+=i;
        
          for(int i=0;i<nums.size();i++)
            arrsum+=nums[i];
        
        return sum-arrsum;
        
    }
};