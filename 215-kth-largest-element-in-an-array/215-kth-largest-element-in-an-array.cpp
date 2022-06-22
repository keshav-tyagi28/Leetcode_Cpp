class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int> max;
        
        for(int i=0;i<nums.size();i++)
            max.push(nums[i]);
        
        
        
        for(int i=1;i<k;i++)
          max.pop();
       
        
        return max.top();
        
    }
};