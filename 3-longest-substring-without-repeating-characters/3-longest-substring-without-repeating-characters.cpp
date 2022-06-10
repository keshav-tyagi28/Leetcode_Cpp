class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
            return 0;
//         int n=s.size();
//         int max=INT_MIN;
        
//         for (int i = 0; i < n; i++)
//         {   
//             for (int len = 1; len <= n - i; len++)
//              {
            
//                 string ans= s.substr(i, len);
//                 cout<<ans<<ans.size()<<endl;
//                 unordered_map<char,int> m;
//                 int flag=1;
//                 for(int i=0;i<ans.size();i++)
//                 {
                    
//                     if(m.find(ans[i])!=m.end())
//                     {
//                         flag=-1;
//                         break;
//                     }              
//                     else
//                         m[ans[i]]++;

//                 }

//                 if(flag==1)
//                     {
//                         int s=ans.size();
//                         if(max<s)
//                             max=s;
//                     }
                
//                 else
//                     continue;


//              } 
        
//         }
//         return max;
        unordered_set<char> set;
    
		int i = 0, j = 0, n = s.size(), ans = 0;
    
		while( i<n && j<n)
		{
			if(set.find(s[j]) == set.end()) //If the character does not in the set
			{
				set.insert(s[j++]); //Insert the character in set and update the j counter
				ans = max(ans, j-i); //Check if the new distance is longer than the current answer
			}
			else
			{
				set.erase(s[i++]); 
				/*If character does exist in the set, ie. it is a repeated character, 
				we update the left side counter i, and continue with the checking for substring. */
			}
		}
		return ans;
        
        
        
    }
};