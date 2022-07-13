class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i=0;
        int j=height.size()-1;
       int ans=0;
        while(i<j)
        {
            int h=min(height[i],height[j]);
            int l=j-i;
           
            ans=max(ans,(h*l));
            
            if(height[i]<height[j])
                i++;
            else
                j--;
            
            
        }
        return ans;
        
    }
};