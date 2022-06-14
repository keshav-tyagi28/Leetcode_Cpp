// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here       
        int sv=0,ev=2000;
        int n=r*c;
        while(sv<=ev)
        {
            int mid=(sv+ev)/2;
            int ans=0;
            for(int i=0;i<r;i++)
            {
                int l=0,h=c-1;
                while(l<=h)
                {
                    int m= l+(h-l)/2;
                    if(matrix[i][m]<=mid)
                        l=m+1;
                    else
                        h=m-1;
                    
                }
                ans=ans+l;
                
            }
        
            if(ans<=n/2)
                sv=mid+1;
            
            else
                ev=mid-1;
        
        
        }
        return sv;
        
    }
     
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends