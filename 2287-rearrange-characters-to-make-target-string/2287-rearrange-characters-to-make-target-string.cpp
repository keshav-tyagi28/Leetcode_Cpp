class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
    unordered_map<int,int> m1;
    unordered_map<int,int> m2;
 
    for(int i=0;i<target.size();i++)
        m1[target[i]]++;
        
       for(int i=0;i<s.size();i++)
        m2[s[i]]++;
        
   int min=1500;
        for(int i=0;i<target.size();i++)
        {
            int c1=m1[target[i]];
            int c2= m2[target[i]];
            
            int count= c2/c1;
            if(count<min)
                min=count;

        }
        
        return min;
}};