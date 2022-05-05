class Solution {
public:
    int trap(vector<int>& height) {
   
        // space - 2n thats why we need better // time is nice
        
//         int n=height.size();
//         vector<int> left(n,0);
//         left[0]=height[0];
//         for(int i=1;i<height.size();i++)
//             left[i]=max(left[i-1],height[i]);
        
//          vector<int> right(n,0);
    
//             right[n-1]=height[n-1];
        
//         for(int i=n-2;i>=0;i--)
//             right[i]=max(right[i+1],height[i]);
        
        
//         int res=0;
//         for(int i=0;i<n;i++)
//         {
//             int ans=min(left[i],right[i])-height[i];
//             res=res+ans;
//         }
        
        
//         return res;
        
        
        //most optimized approach
        int n=height.size();
        int l=0,r=n-1,lmax=0,rmax=0,res=0;
        while(l<=r)
        {
            if(height[l]<=height[r]){
            if(height[l]>=lmax)
                lmax=height[l];
            
            else
                res+=lmax-height[l];
            
            l++;
            }
            
            else{
                if(height[r]>=rmax)
                rmax=height[r];
            
            else
                res+=rmax-height[r];
            
            r--;
                
            }
            
        }
        
        return res;
        
        
        
    }
};