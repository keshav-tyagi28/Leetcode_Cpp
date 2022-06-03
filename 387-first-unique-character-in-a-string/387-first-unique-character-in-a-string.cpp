class Solution {
public:
    int firstUniqChar(string s) {
           if(s.size()<2)
         return 0; 
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        
         for(int i=0;i<s.size();i++)
         {
             if(m[s[i]]==1)
                 return i;
             
         }
        return -1;
    }
};