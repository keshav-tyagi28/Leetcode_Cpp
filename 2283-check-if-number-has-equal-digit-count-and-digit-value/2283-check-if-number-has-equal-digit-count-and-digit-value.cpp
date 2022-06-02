class Solution {
public:
    bool digitCount(string num) {
        
        unordered_map<int,int> m;
        for(int i=0;i<num.size();i++)
        {
            m[num[i]-'0']++;
            
        }
          for(int i=0;i<num.size();i++)
        {
           int rval=num[i]-'0';
           if(m[i]!=rval)
               return false;
            
        }
        return true;
    }
};