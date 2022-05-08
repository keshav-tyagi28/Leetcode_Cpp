// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
    
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
            m[arr[i]]++;
       
        int pairs=0;
       
       for(int i=0;i<n;i++)
        {
            if(m.find(k-arr[i])!=m.end() && m[arr[i]]!=0)
                {
                    m[arr[i]]--;
                    pairs+=m[k-arr[i]];
                    
                }
            
          
        }
    
    return pairs;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends