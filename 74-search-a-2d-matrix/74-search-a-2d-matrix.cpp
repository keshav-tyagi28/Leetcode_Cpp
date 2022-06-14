class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int r=matrix.size();
        int c=matrix[0].size();
        int l=0,h=r*c-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            int el= matrix[mid/c][mid%c];
            
            if(el==target)
                return true;
            
           else if(el>target)
                h=mid-1;
            
            else
                l=mid+1;
            
        }
        return false;
    
    
    
//      int m = matrix.size();
//         int n = matrix[0].size();
//         int low = 0;
//         int high = (m * n) - 1;

//         while (low <= high)
//         {
//             int mid = low + (high - low) / 2;
//             int val = matrix[mid / n][mid % n];
//             if (val == target)
//             {
//                 return true;
//             }
//             else if (val > target)
//             {
//                 high = mid - 1;
//             }
//             else
//             {
//                 low = mid + 1;
//             }
//         }
//         return false;
    
    
    
    
    
    
    
    
    
    
    
    
    
    }
        
        
        
        
        
        
        
};
    