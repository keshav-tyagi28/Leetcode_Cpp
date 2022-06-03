class Solution {
public:
    int lengthOfLastWord(string s) {
        
    int count=0;
    int i=s.size()-1;
       
        if(i==0)
            return 1;
        
        while(s[i]==' ')
        {
            i--;
        }
        while(s[i]!=' ' && i>=0)
        {
            count++;
            if(i==0)
                break;
            
            i--;
            
        }
        return count;
        
    }
};