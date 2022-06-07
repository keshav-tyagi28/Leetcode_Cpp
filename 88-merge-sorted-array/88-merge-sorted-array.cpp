class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0; 
                int i=0;

  
        if(m==0&&n!=0)
        {
              while(j<n)
        {
             nums1[i]=nums2[j];
                j++;
               i++;
            
        }
            
        }   
        if(n==0)
            return ;
      
        int h=m;
        for(int z=0;z<n;z++)
        {
            nums1[h]=nums2[z];
            h++;
        }
        sort(nums1.begin(),nums1.end());

//         for( i;i<m;i++)
// {
//     if(nums1[i]>nums2[j])
//     {
//         swap(nums1[i],nums2[j]);
//         sort(nums2.begin(),nums2.end());
//     }
    
    
// // }
//          while(j<n)
//         {
//              nums1[i]=nums2[j];
//                 j++;
//                i++;
            
//         }
        
//using extra space        
//         vector<int> ans;
//         int i,j,k;
//         i=j=k=0;
//         while(i<m&&j<n)
//         {
//             if(nums1[i]<=nums2[j])
//             {
//                 ans.push_back(nums1[i]);
//                 i++;
//             }
        
            
//             if(nums1[i]>nums2[j])
//             {
//                 ans.push_back(nums2[j]);
//                 j++;
//             }
            
            
//         }
//         while(i<m)
//         {
//              ans.push_back(nums1[i]);
//                 i++;
//         }
//         while(j<n)
//         {
//              ans.push_back(nums2[j]);
//                 j++;
            
//         }
   
//     for(k;k<ans.size();k++)
//     {
//         nums1[k]=ans[k];
//     }
    
    
    
    
    
    
    
    }
};