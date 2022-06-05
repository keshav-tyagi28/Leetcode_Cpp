// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    
	    unordered_map<char,int> m;
	    for(int i=0;i<pat.size();i++)
	    {
	        m[pat[i]]++;
	    }
	    
	    int count=m.size();
	    int k=pat.size();
	    int i=0,j=0,ans=0;
	    while(j<txt.size())
	    {
	        //calc
	        if(m.find(txt[j])!=m.end())
	        {
	            m[txt[j]]--;
	            if(m[txt[j]]==0)
	                count--;
	            
	        }
	        
	        // size<k
	        if(j-i+1<k)
	            j++;
	            
	        
	        //size==k
	        else if(j-i+1==k)
	        {
	            if(count==0)
	                ans++;
	           
	           if(m.find(txt[i])!=m.end())  
	           {
	               m[txt[i]]++;
	               if(m[txt[i]]==1)
	                count++;
	               
	                
	           }
	            
	            i++;
	            j++;
	            
	        }
	        
	        
	    }
	    return ans;
	    
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends