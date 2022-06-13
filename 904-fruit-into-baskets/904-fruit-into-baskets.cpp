class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        unordered_map<int,int> m;
        int i=0,j=0,n=fruits.size(),ans=0;
        while(j<n)
        {
            if(m.find(fruits[j])==m.end())
            {
                if(m.size()<2){
                    m[fruits[j]]++;
                    j++;
                    
                }
                else{
                    ans=max(ans,j-i);
                    m[fruits[i]]--;
                    if(m[fruits[i]]==0)
                        m.erase(fruits[i]);
                   
                    i++;
                }
                
            }
            else{
                m[fruits[j]]++;
                j++;
                
                
            }
        }
        
                            ans=max(ans,j-i);
        return ans;

    }
};