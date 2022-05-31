// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void helper(vector<int> arr, int N,int i,vector<int> &ans,vector<int> output){
        
        
        if(i==N)
        {
            int sum=0;
            for(int j=0;j<output.size();j++)
                sum+=output[j];
            
            ans.push_back(sum);
            return ;
        }
        
        //include ith
        output.push_back(arr[i]);
        helper(arr,N,i+1,ans,output);
        output.pop_back();
        
        //not include
        helper(arr,N,i+1,ans,output);
        
        
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        vector<int> output;
        helper(arr,N,0,ans,output);
        
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends