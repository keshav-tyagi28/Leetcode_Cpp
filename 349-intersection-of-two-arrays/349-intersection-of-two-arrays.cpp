class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
 
    set<int> ans;
        
    for(int i=0;i<nums1.size();i++)
    {
        int el=nums1[i];
        for(int j=0;j<nums2.size();j++)
        {
            if(el==nums2[j])
            {
                ans.insert(el);
                break;
            }
        }
    }
           vector<int> ans2(ans.size());
        int j=0;
        
        for (auto itr : ans)
        {
            ans2[j]=itr;
            j++;  
        } 
       
        return ans2;
    }
};